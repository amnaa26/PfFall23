/*
 *Programmer: Amna(23K-0066)
 *Desc: Division without using / operator
 *Date: 10th Oct'23
 */
#include <stdio.h>

int main () {
	int a, b, ans, i;
	printf("Enter a number:\n");
	scanf("%d", &a);
	printf("Enter a divisor:\n");
	scanf("%d", &b);
	ans = a ;
	if(a == b){
		printf("\nAnswer is 1");
	} else {
	i = 0;
	while(ans > 0){
		ans = ans - b;
		++i;
		 }
	printf("\nAnswer is %d",i);
	}
}