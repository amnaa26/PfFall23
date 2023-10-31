/*
 * Programmer: Amna
 * Desc: Finding factorial using recursions
 * Date: 31/10/2023
*/

#include <stdio.h>

int factorial(int n) {
	  int sum = 0;
	  if(n == 0 || n == 1)
		return 1;
	  else 
		sum += n * (n - 1);
		return sum;
	}

int main() {
	int n;
	printf("Enter any integer: ");
	scanf("%d", &n);
	factorial(n);
	printf("The answer is %d", factorial(n));
}