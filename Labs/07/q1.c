#include <stdio.h>

int main () {
	int a, b, i;
	printf("Enter a number:\n");
	scanf("%d", &a);
	printf("Enter a divisor:\n");
	scanf("%d", &b);
	i = 0;
	while(a > 0){
		a = a - b;
		++i;
	}
	printf("\nAnswer is %d",i);
	
}