/*
 * Programmer: Amna
 * Date: 30/10/2023
 * Desc: You are given a 2D array that represents the batting performance of a cricket team.
         Each row in the array corresponds to a different batsman, and each column represents an
         inning played by that batsman. The values in the array represent the runs scored by each
         batsman in each inning.
         Write a C program to perform the following tasks:
         1) Input the number of batsmen and the number of innings from the user.
         2) Input the batting performance for each batsman in each inning.
         3) Calculate and display the following statistics for each batsman.
         ● Total runs scored.
         ● Average runs per inning
	       ● Highest score in a single inning
	       ● Number of centuries (innings with a score of 100 or more)
	       ● Number of half-centuries (innings with a score of 50-99)
	       Your program should display the statistics for each batsman individually.
*/


#include <stdio.h>

int main() {
	int performance[20][20], totalRun[20], averageRun[20], arrOfHighestScore[20], Century[20], HalfCenturies[20];
	int numOfBatsmen, numOfInnings, highestScore, score = 0, numOfCentury, numOfHalfCenturies;
	printf("Enter the number of batsmen: ");
	scanf("%d", &numOfBatsmen);
	printf("Enter the number of innings: ");
	scanf("%d", &numOfInnings);

	//loop for calculating total runs and average runs of each player
	for(int i = 0; i < numOfBatsmen; ++i){
		  score = 0;
	  	for(int j = 0; j < numOfInnings; ++j){
		    	printf("Enter the batting performance of batsman %d in inning %d: ", i + 1, j + 1);
		    	scanf("%d", &performance[i][j]);
			    score = score + performance[i][j];
			    totalRun[i]= score;
		}
			averageRun[i] = score / numOfInnings;
  }
	
	//loop for calculating highest score of each inning
	highestScore = performance[0][0];
	for(int j = 0; j < numOfInnings; ++j) {
		  for(int i = 0; i < numOfBatsmen; ++i){
			    if(highestScore < performance[i][j]){
			        highestScore = performance[i][j];
			        arrOfHighestScore[j] = highestScore;
			    }
		    	else arrOfHighestScore[j] = highestScore;
		    }
	 }
	
	//loop for calculating number of centuries of each player
	for(int i = 0; i < numOfBatsmen; ++i){
		    numOfCentury = 0 ;
		    numOfHalfCenturies = 0 ;
		  for(int j = 0; j < numOfInnings; ++j){
			      if(performance[i][j] > 99){
			         numOfCentury += 1;
		      	}

		      	//Calculating number of half centuries of each player
		      	if(performance[i][j] > 49 && performance[i][j] < 100){
			         numOfHalfCenturies += 1;
		      	}
	    	}
	    	Century[i] = numOfCentury;
	    	HalfCenturies[i] = numOfHalfCenturies;
	}
	
	//printing total score of each player
	printf("\n\n----------TOTAL SCORE OF EACH PLAYER----------");
	for(int i = 0; i < numOfBatsmen; ++i){
		  printf("\nTotal score of player %d is %d", i + 1, totalRun[i]);
	}

	//printing average score of each player
	printf("\n\n----------AVERAGE SCORE OF EACH PLAYER----------");
	for(int i = 0; i < numOfBatsmen; ++i){
		  printf("\nAverage score of player %d is %d", i + 1, averageRun[i]);
	}

	//printing highest score of each inning
	printf("\n\n----------HIGHEST SCORE IN EACH INNING----------");
	for(int j = 0; j < numOfInnings; ++j){
	  	printf("\nHighest score in inning %d is %d", j + 1, arrOfHighestScore[j]);
	}

	//printing number of centuries of each player
	printf("\n\n--------NUMBER OF CENTURIES OF EACH PLAYER--------");
	for(int i = 0; i < numOfBatsmen; ++i){
	  	printf("\nNumber of centuries of Player %d = %d", i + 1, Century[i]);
	}

	//printing number of half centuries of each player
	printf("\n\n------NUMBER OF HALF-CENTURIES OF EACH PLAYER------");
	for(int i = 0; i < numOfBatsmen; ++i){
		  printf("\nNumber of half-centuries of Player %d = %d", i + 1, HalfCenturies[i]);
	}
}
