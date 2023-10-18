/*
 * Programmar: Amna(23K-0066)
 * Desc: Rotating elements of an array to the left by d positions
 * Date: 10/10/2023
 */

#include <stdio.h>

int main() {
	int size, i, d;
	int arr[4] = {6,1,5,4};
	printf("Enter d:");
	scanf("%d",&d);
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i = 0; i < size; ++i){
		printf("Enter num %d: ",i + 1);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < d; ++i){
		arr[size] = arr[i];
		++size;
	}
	printf("[ ");
	for(i = d; i < size; ++i){
		arr[i - d] = arr[i];
		printf("%d ", arr[i - d]);
	}
	printf("] ");
}
