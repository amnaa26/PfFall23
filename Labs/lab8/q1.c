#include <stdio.h>

void swapintegers(int a, int b){
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("The value of a is: %d\nThe value of b is: %d", a, b);
}

int main () {
	int userinput, a, b;
	printf("Enter the value of a and b :\n");
	scanf("%d %d", &a, &b);
	swapintegers(a, b);
}
