#include <stdio.h>

int main () {
	int input, i, size;
	int arr[1000];
	printf("How many times do you want to take the input? :\n");
	scanf("%d",&input);
	for(i = 0; i < input; ++i){
		printf("Enter num %d: ", i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	for(size = input - 1; size >= 0; --size){
		printf("%d ",arr[size]);
	}
	
}