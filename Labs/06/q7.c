/*
* Programmer: Amna(23K-0066)
* Date      : 07/10/2023
* Description: This is task 7 file
* Related files:
*/

#include <stdio.h>

int main () {
	int input, i, ans = 0, num;
	int arr[1000];
	printf("How many times do you want to take the input? :\n");
	scanf("%d",&input);
	for(i = 0; i < input; ++i){
		printf("\nEnter num %d: ", i+1);
		scanf("%d",&arr[i]);
		ans = arr[i] + ans;

	}
	printf("\nThe sum of [ ");
	for(i = 0; i < input; ++i){
		printf("%d ", arr[i]);
}
	printf("] is %d.\n",ans);
}
