/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 9 file
* Related files:
*/

#include <stdio.h>

int main() {
	int size, min, max;
	int arr[10000];
	printf("How many times do you want to take the input?:\n");
	scanf("%d",&size);
	for(int i = 0; i < size; ++i){
		printf("Enter num %d: ", i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}

	max = min = arr[0];
	for(int i = 1; i < size; ++i){
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	printf("\nMaximum value found is %d",max);
	printf("\nMinimum value found is %d",min);
}
