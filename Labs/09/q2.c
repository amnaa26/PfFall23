/*
 * Programmer: Amna
 * Desc: Reversing an array using pointers in function
 * Date: 31/10/2023
*/

#include <stdio.h>

void reverse(int *arr, int size){
	for(int i = size - 1; i >= 0; --i){
		printf("%d ", arr[i]);
	}
}


int main() {
	int *arr[10];
	int arr2[10];
	for(int i = 0; i < 10; ++i){
		printf("Enter value of element%d: ", i + 1);
		scanf("%d", &arr2[i]);
	}
	*arr = arr2; 
	printf("\nOriginal array is: ");
	for (int i = 0; i < 10; ++i){
		printf("%d ", arr2[i]);
	} 
	printf("\nReversed array is: ");
	reverse(*arr, 10);
	printf("\n");
	return 0;
}