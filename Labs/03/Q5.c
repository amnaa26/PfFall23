#include <stdio.h>

int main() {
	float distance, total_distance = 0, fuel_consumed_per_liter, fuel_consumed;
	printf("Enter distance you travelled: ");
	scanf("%f",&distance);
	total_distance += distance;
	while(distance > 0) {
		printf("Enter distance you travelled or negative value to terminate program: ");
		scanf("%f",&distance);
		total_distance += distance;
 	}//end while
	printf("Enter the fuel consumed per liter: ");
	scanf("%f",&fuel_consumed_per_liter);
	fuel_consumed = total_distance * fuel_consumed_per_liter;
	printf("The total fuel consumed during the journey is: ");
	printf("%f\n",fuel_consumed);
}//end main