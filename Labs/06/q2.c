/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 2 file
* Related files:
*/

#include <stdio.h>

int main () {
	int sum = 0;
	for (int a = 0, b = 1; ;) {
		if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
			sum += a;
		if (b % 3 == 0 || b % 5 == 0 || b % 7 == 0)
			sum += b;
		if (a > 10000) break;
		printf("%d ", a);
		if (b > 10000) break;
		printf("%d ", b);
		a += b;
		b += a;
		
	}
	printf("\nThe sum of numbers divisble by 3, 5 or 7 is %d", sum);
}
