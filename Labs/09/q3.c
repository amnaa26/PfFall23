/*
 * Programmer: Amna
 * Desc: Printing addresses and values stored in arrays using pointers
 * Date: 31/10/2023
*/

#include <stdio.h>

int main() {
	char *charArray[1000], arr1[1000] ;
	int arr2[1000], check[100];
	long long int arr3[1000];
	int size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	for(int i = 0; i < size; ++i){
		printf("Enter element%d: ", i + 1);
		scanf("%c", charArray[i]);
	}
	check = charArray;
	printf("\nThe values stored in char array are:");
	for(int i = 0; i < size; ++i){
		printf("%c ", check[i]);
	}
	printf("\nThe addresses of char array are: ");
	for(int i = 0; i < size; ++i){
		arr1[i] = charArray[i];
		printf("%c ", arr1[i]);
	}
	

}