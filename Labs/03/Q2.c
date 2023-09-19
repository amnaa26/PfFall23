#include <stdio.h>

int main() {
	float length, breadth, height, volume;
	printf("Enter length:\n");
	scanf("%f",&length);
	printf("Enter breadth:\n");
	scanf("%f",&breadth);
	printf("Enter height:\n");
	scanf("%f",&height);
	printf("\n--DONE... Taking inputs--\n");
	volume = length * breadth * height;
	printf("The volume calculated is: ");
	printf("%f\n",volume);

}//end main