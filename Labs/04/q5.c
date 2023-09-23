/*
* Programmer: Amna(23K-0066)
* Date      : 12th Sept'2023
* Description: This is task5 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

int main() {
	int day1, month1, year1, day2, month2, year2;
	printf("Enter day, month, year of person 1: ");
	scanf("%d %d %d", &day1, &month1, &year1);
	printf("Enter day, month, year of person 2: ");
	scanf("%d %d %d", &day2, &month2, &year2);
	printf("\n");

	if(year1 < year2)
		printf("Person 1 is older\n");
	else if(year1 > year2)
		printf("Person 2 is older\n");
	else
		if(month1 < month2)
			printf("Person 1 is older\n");
		else if(month1 > month2)
			printf("Person 2 is older\n");
	
		else
			if(day1 < day2)
				printf("Person 1 is older\n");
			else if(day1 > day2)
				printf("Person 2 is older\n");
			else
				printf("They are same age\n");
 

}//end main
