#include <stdio.h>

int main() {
	int input;
	printf("Enter input: ");
	scanf("%d",&input);
	if (input%3 == 0) {
		printf("This number is a multiple of 3\n");
	}
	else	printf("This number is not a multiple of 3\n");

}//end main