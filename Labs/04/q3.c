/*
* Programmer: Amna(23K-0066)
* Date      : 12th Sept'2023
* Description: This is task3 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

int main() {
	int counter, square, number, i = 0, sum = 0;
	printf("How many numbers you want to enter: ");
	scanf("%d", &counter);
	while (i < counter) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &number);
		square = number * number;
		sum = sum + square;
		i = i + 1;
	}

	printf("Your answer is: %d\n", sum);
}//end main

