/*
* Programmer: Amna(23K-0066)
* Date      : 19th Sept'2023
* Description: This is task 5 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

/* 
	Write a C program to input a character 
	from the user and check whether the given 
	character is a small alphabet, capital alphabet, 
	digit or special character, using if else.
	
*/

int main(){
	char input;
	printf("Enter a character: ");
	scanf("%c", &input);
	if(input >= 'a' && input <= 'z'){
		printf("The given input is a small alphabet.");
	}
	else if (input >= 'A' && input <= 'Z'){
		printf("The given input is a capital alphabet.");
	}
	else if (input >= '0' && input <= '9'){
		printf("The given input is a digit.");
	}
	else{
		printf("The given input is a special character.");
	}
	
}
