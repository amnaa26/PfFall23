#include <stdio.h>

int main() {
	float num1, num2, ans, percent;
	char operator;
	printf("Available Operators: +, -, *, /, %%");
	printf("\nEnter the operator:\n");
	scanf("%c",&operator);
	printf("Enter number1:\n");
	scanf("%f", &num1);
	printf("Enter number2:\n");
	scanf("%f", &num2);
	if(operator == '+') {
		ans = num1 + num2;
		printf("Your answer is: ");
		printf("%f", ans);
		}//end addition

	else if(operator == '-') {
		ans = num1 - num2;
		printf("Your answer is: ");
		printf("%f", ans);
		}//end subtraction

	else if(operator == '*'){
		ans = num1 * num2;
		printf("Your answer is: ");
		printf("%f", ans);
		}//end multiplication

	else if(operator == '/'){
		ans = num1/num2;
		printf("Your answer is: ");
		printf("%f",ans);	
		}//end division
	else if (operator == '%'){
		percent = num1/num2;
		printf("Your answer is: %f", percent); 
		}
	else{
		printf("you entered an invalid operator!");
		}
	
}//end main
