/*
* Programmer: Amna(23K-0066)
* Date      : 12th Sept'2023
* Description: This is task7 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

int main() {
	char input[100];
	int length = 0;
	int i = 0;
	printf("Enter a string: ");
	scanf("%s", &input);
	while(input[length] != '\0'){
		length = length +1;
	}
	printf("length of string is: %d", length);
	while(i < length){
		if(input[i]!=input[length-1]){
			printf("\nIt is not a Palindrome!");
			return;
		}
		i = i + 1;
		length = length - 1;
	}
	printf("\nIt is a Palindrome!");
}

