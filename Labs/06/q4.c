/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 4 file
* Related files:
*/

#include <stdio.h>

int main () {
	int a, b, num;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&a,&b);
	char* NumInWords[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	if(a >= 0 && a <= 9){
		 num = a;
		 while(num <= 9 && num <= b){
		 printf("%s, ",NumInWords[num]);
		 ++num;}
	}
	for(num = 10; num <= b; ++num){
		if(num % 2 == 0){
			printf("Even, ");}
		else printf("Odd, ");
	}
} 
