#include <stdio.h>

void calculator(float a, float b, char operand){
	switch(operand){
		case '+':
			printf("The sum of %.3f and %.3f is %.3f",a, b, a + b);
			break;
		case '-':
			printf("The difference of %.3f and %.3f is %.3f",a ,b ,a - b);
			break;
		case '*':
			printf("The product of %.3f and %.3f is %.3f",a ,b ,a * b);
			break;
		case '/':
			if(b != 0)
				printf(" %.3f divide by %.3f yields %.3f", a, b, a / b);
			else
				printf("Division by zero is not possible");
			break;
		default:
			printf("Invalid operand!");
	}
	
}

int main(){
	float num1, num2;
	char operand;
	printf("Enter the operand:\n");
	scanf(" %c",&operand);
	printf("Enter two numbers:\n");
	scanf("%f %f", &num1, &num2);
	calculator(num1, num2, operand);
}