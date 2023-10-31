/*
 * Programmer: Amna(23k-0066)
 * Date: 24/10/2023
 * Desc: In this C program, you are tasked with creating a function
called decideCarUsage that helps users decide whether they should use their car
on a particular day of the week. Users provide the numeric part of their car's
number and the day of the week (1 to 7). The program applies a simple rule:
even-numbered cars should be used on even days, and odd-numbered cars on odd
days. The function returns 1 if the car should be used and 0 if it should not.


*/

#include <stdio.h>

int decideCarUsage(int d, int n){
	if(d % 2 == 0 && n % 2 == 0) {
		printf("The car should be used");
		return 1;
	}
	if(d % 2 != 0 && n % 2 != 0) {
		printf("The car should be used");
		return 1;
   }
   else 
   printf("The car should not be used");
   return 0;
}

int main() {
	int day, number;
	printf("Enter day:");
	scanf("%d", &day);
	if(day > 7){
		printf("Wrong input");
	}
	else{
		printf("Enter number of your car:");
		scanf("%d", &number);
		decideCarUsage(day, number);
	}
}