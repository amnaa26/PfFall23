/*
* Programmer: Amna(23K-0066)
* Date      : 12th Sept'2023
* Description: This is task6 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

int main() {
	int n, j, outerspace, innerspace, i = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	outerspace = n - 1;
	innerspace = 1;

	// Increasing space
	while(i < n){
		// Prints outerspaces
		j = 0;
		while(j < outerspace){
			printf(" ");
			j = j + 1;
		}
		
		printf("*");

		if (i > 0){
			j = 0;
			while(j < innerspace){
				printf(" ");
				j = j + 1;
			}
			innerspace = innerspace + 2;
			printf("*");
		}

		printf("\n");
 		j = 0;
		i = i + 1;
		outerspace = outerspace - 1;
	}

	// Decreasing space
	outerspace = outerspace + 2;
	innerspace = innerspace - 4;
	i = 0;
	while (i < n - 1){
		j = 0;
		while(j < outerspace){
			printf(" ");
			j = j + 1;
		}
		printf("*");

		if(i < n - 2) {
			j = 0;
			while(j < innerspace){
				printf(" ");
				j = j + 1;
			}
			innerspace = innerspace - 2;
			printf("*");
		}
		
		printf("\n");
		j = 0;
		i = i + 1;
		outerspace = outerspace + 1;
	}
}
