/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 1 file
* Related files:
*/
#include <stdio.h>

int main() {
	int input, i, total = 0;
	printf("Enter input:\n");
	scanf("%d",&input);
	for(i = input - 1; i > 0; i--){
	      total = input % i == 0? total + i: total;
	}
	if(total == input){
	      printf("Input is a perfect number\n");
	}else
	      printf("Input is not a perfect number\n");
}
