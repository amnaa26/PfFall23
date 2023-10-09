#include <stdio.h>

int main () {
	int a, b, LCM, GCD, i = 0;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&a,&b);
	if(a > b){
	   GCD = b;
	   if(a%GCD == 0 && b%GCD == 0){
		printf("The GCD is: ");
		printf("%d\n",GCD); }
	   else{
		while(i < b){
		       if(a%GCD == 0 && b%GCD == 0){
		       printf("The GCD is: ");
		       printf("%d\n",GCD);
		       break; }
		       ++i;
		       --GCD; } }
		}
	else{
	   GCD = a;
	   if(a%GCD == 0 && b%GCD == 0){
		printf("The GCD is: ");
		printf("%d\n",GCD); }
	   else{
		while(i < a){
		       if(a%GCD == 0 && b%GCD == 0){
		       printf("The GCD is: ");
		       printf("%d\n",GCD); 
		       break;}
		       ++i;
		       --GCD; } }
	}

	LCM = (a * b) / GCD;
	printf("The LCM is: ");
	printf("%d\n",LCM);
}