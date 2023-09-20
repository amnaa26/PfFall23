#include <stdio.h>

int main(){
	// calculator using switch statement
	// defining variables
	char operand;
	float num1, num2;
	// input operand
	printf("Enter operand (+, /, *, -): ");
	scanf("%c", &operand);
	// input operators
	printf("enter number 1: ");
	scanf("%f", &num1);
	printf("enter number 2: ");
	scanf("%f", &num2);
	// switch - case
	switch(operand){
		case '+':
			printf("The sum of %.3f and %.3f is %.3f", num1, num2, num1+num2);
			break;
		case '-':
			printf("The differance of %.3f and %.3f is %.3f", num1, num2, num1-num2);
			break;
		case '*':
			printf("The product of %.3f and %.3f is %.3f", num1, num2, num1*num2);
			break;
		case '/':
			printf("%.3f divide by %.3f yeilds %.3f", num1, num2, num1/num2);
			break;
		default:
			printf("Invalid operand!");
	}	
	
}
