/*
 * Programmar: Amna(23K-0066)
 * Desc: Dividing two numbers without using / operator
 * Date: 10/10/2023
 */

#include <stdio.h>

int main () {
	int a, b, i;
	printf("Enter a number:\n");
	scanf("%d", &a);
	printf("Enter a divisor:\n");
	scanf("%d", &b);
	i = 0;
	while(a > b){
		a = a - b;
		++i;
	}
	printf("\nAnswer is %d",i);
	
}
