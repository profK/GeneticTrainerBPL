// Copyright Epic Games, Inc. All Rights Reserved.

#include "GeneticTrainerBPLBPLibrary.h"
#include "GeneticTrainerBPL.h"

UGeneticTrainerBPLBPLibrary::UGeneticTrainerBPLBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int MakeScoresUnsigned(TArray<FFloatingPointGenome>& genomes)
{
	int lowScore = genomes[0].lastScore;
	int shiftNum = lowScore<0?-lowScore:0;
	int highestRandVal = 0;
	for(int i=0;i<genomes.Num();i++)
	{
		genomes[i].lastScore += shiftNum;
		highestRandVal += genomes[i].lastScore;
	}
	return highestRandVal;
	
}

TArray<int> SelectTwoRandomGenomes(const TArray<FFloatingPointGenome>& Array,
	int HighestRandVal)
{
	TArray<int> parentIndexes;
	for(int id=0;id<2;id++)
	{
		int randVal = FMath::RandRange(0,HighestRandVal);
		int runningTotal = 0;
		for(int i=0;i<Array.Num();i++)
		{
			runningTotal += Array[i].lastScore;
			if(runningTotal>=randVal)
			{
				parentIndexes.Add(i);
				break;
			}
		}
	}
	return parentIndexes;
}



#define arithmaticMutation true
TArray<FFloatingPointGenome> CrossOver(const FFloatingPointGenome& parent1,
	const FFloatingPointGenome& parent2)
{
	FFloatingPointGenome child1;
	FFloatingPointGenome child2;
	for(int i=0;i<parent1.genes.Num();i++)
	{
		float a = FMath::FRand();
		if (arithmaticMutation){
			child1.genes.Add((parent1.genes[i]*a)+((1-a)*parent2.genes[i]));
			child2.genes.Add((parent2.genes[i]*a)+((1-a)*parent1.genes[i]));
		} else {
			if(FMath::FRand()>.7)
			{
				child1.genes.Add(parent1.genes[i]);
				child2.genes.Add(parent2.genes[i]);
			}
			else
			{
				child1.genes.Add(parent2.genes[i]);
				child2.genes.Add(parent1.genes[i]);
			}
		}
	}
	TArray<FFloatingPointGenome> newGenes;
	newGenes.Add(child1);
	newGenes.Add(child2);
	return newGenes;
}

void Mutate(FFloatingPointGenome& genome, float MutationRate)
{
	float a = FMath::FRand();
	for (int i=0;i<genome.genes.Num();i++)
	{
		if (a<=MutationRate)
		{
			genome.genes[i] += (FMath::FRand()-0.5);
		}
	}
}

TArray<FFloatingPointGenome>UGeneticTrainerBPLBPLibrary::MakeNextGeneration(
		TArray<FFloatingPointGenome> currentGeneration,float mutationRate)
{
	TArray<FFloatingPointGenome> nextGeneration;
	// Sort the current generation by score
	currentGeneration.Sort([](const FFloatingPointGenome& A,
		const FFloatingPointGenome& B) {
		return A.lastScore < B.lastScore; 
	});
	int highestRandVal = MakeScoresUnsigned(currentGeneration);
	// Now loop and generate all members of the next generation
	for(int i=0;i<currentGeneration.Num()/2;i++)
	{
		TArray<int> parentIndexes =
			SelectTwoRandomGenomes(currentGeneration,highestRandVal);
		
		TArray<FFloatingPointGenome> children =
			CrossOver(currentGeneration[parentIndexes[0]],
				currentGeneration[parentIndexes[1]]);
		Mutate(children[0],mutationRate);
		Mutate(children[1],mutationRate);
		nextGeneration.Append(children);
	}

	return nextGeneration;
}

