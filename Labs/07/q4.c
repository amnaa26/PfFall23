#include <stdio.h>

int main() {
	int row, col, symmetryCheck;
	int A[2][2];
	printf("Enter an array:\n");
	for(row = 0; row < 2; ++row){
		for(col = 0; col < 2; ++col){
			scanf("%d", &A[row][col]);
		}
	}
	printf("\nOriginal array is:\n");
	for(row = 0; row < 2; ++row){
		for(col = 0; col < 2; ++col){
			printf("%d\t",A[row][col]);
		}
	printf("\n");
	}
	printf("\nTranspose array is:\n");
	for(col = 0; col < 2; ++col){
		for(row = 0; row < 2; ++row){
			printf("%d\t",A[row][col]);
		}
	printf("\n");
	}
	for(row = 0; row < 2; ++row){
		for(col = 0; col < 2; ++col){
			if(A[row][col] != A[col][row]){
				symmetryCheck = 0;
				break;
			}
		}
	}
	if(symmetryCheck != 0){
		printf("\nArray is symmetric\n");
	} else
		printf("\nArray is not symmetric\n");
} 