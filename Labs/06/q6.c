/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 6 file
*/

#include <stdio.h>

int main () {
	int userTurn, numOfMatches = 21;
	printf("There are 21 matchsticks and you can pick 1, 2, 3 or 4 matchsticks\n");
	printf("The one who has to pick the last matchstick loses.\n");
	while(numOfMatches > 1) {
		printf("Pick matchstick(s): ");
		scanf("%d", &userTurn);
		if (userTurn < 1 || userTurn > 4) {
			printf("\nPick only 1, 2, 3 or 4 cards.\n");
			continue;
		}
		
		numOfMatches -= 5;		
		printf("You picked %d matchstick(s)\n", userTurn);
		printf("Computer picked %d matchstick(s)\n", 5 - userTurn);
		printf("Remaining matchstick(s) are %d\n\n", numOfMatches);		
	}

	printf("HAHAHA You lost!\n");
}
