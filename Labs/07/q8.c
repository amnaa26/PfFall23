/*
 * Programmer: Amna(23K-0066)
 * Desc: Sorting an array into ascending order
 * Date: 10/10/2023
*/

#include <stdio.h>

int main () {
	int arr[100];
	int size, j, temp;
	
	//Taking array as input
	printf("Enter the size of array:");
	scanf("%d", &size);
	for(int i = 0; i < size; ++i){
		printf("Enter element %d :", i + 1);
		scanf("%d", &arr[i]);
	}

	//Sorting the array
	for(int i = 0; i < size; ++i){
		for(int i = 0; i < size - 1; ++i){
			if(arr[i] > arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	

	//Printing sorted array
	for(int i = 0; i < size; ++i){
		printf("\n%d,", arr[i]);
	}
}