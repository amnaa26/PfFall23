/*
 * Programmar: Amna(23K-0066)
 * Desc: Counting the sum of digits of given input
 * Date: 10/10/2023
 */

#include <stdio.h>

int main () {
	int input, d, sum;
	printf("Enter a number: ");
	scanf("%d",&input);
	sum = 0;
	while(input > 0){
		d = input % 10;
		sum = sum + d;
		input = input / 10;
	}
	printf("%d",sum);
	return 0;
}
