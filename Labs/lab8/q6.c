/*
 * Programmer: Amna(23k-0066)
 * Date: 24/10/2023
 * Desc: You are given an array of integers. Write a C program that
defines a user-defined function processArray to calculate the sum, maximum, and
minimum values in the array. The program should take the array and its size as
parameters and use the function to compute these values.
*/

#include <stdio.h>

void processArray(int arr[], int size) {
	int i, sum = 0, max, min;
	max=min=arr[0];
	for(i = 0; i < size; ++i){
		sum = sum + arr[i];
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
		 	min = arr[i];
	}
	printf("The sum of your array is %d\nThe maximum value is %d\nThe minimum value is %d", sum, max, min);
}

int main () {
	int size, i;
	printf("Enter the size of array:");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; ++i){
		printf("Enter num%d: ", i + 1);
		scanf("%d",&arr[i]);
	}	
	processArray(arr, size);
}
