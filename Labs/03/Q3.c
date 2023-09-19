#include <stdio.h>
#include <math.h>

int main() {
	float perpendicular, base, hypotenuse;
	printf("Enter Perpendicular: ");
	scanf("%f",&perpendicular);
	printf("Enter Base: ");
	scanf("%f",&base);
	hypotenuse = (perpendicular * perpendicular) + (base * base);
	hypotenuse = sqrt(hypotenuse);
	printf("The hypotenuse calculated is: ");
	printf("%f\n",hypotenuse);
	
}//end main