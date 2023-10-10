/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 5 file
* Related files:
*/

#include <stdio.h>

int main() {
	int input, i = 0;
	printf("Enter a positive number:\n");
	scanf("%d",&input);
	for(i = 0; i <= input; ++i){
		if(i%2 == 0)
		printf("%d\t%d\t%d\t%d\n",i,i,i,i);
		else
		printf("\t%d\t%d\t\n",i,i);}
	
}
