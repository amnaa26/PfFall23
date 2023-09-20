#include <stdio.h>
int main() {
	int time;
	printf("Enter time in the 24-hour format:\n");
	scanf("%d",&time);
	if((time >= 500 && time <=1100) || (time >= 5 && time <= 11)){
		printf("Good Morning!");
	}else if ((time >= 1200 && time <=1800) || (time >= 12 && time <=18)){
		printf("Good Evening!");
	}else if ((time > 1800 && time <= 2400) || (time > 18 && time <= 24) || (time >= 1 && time <= 4)){
		printf("Good Night!");
	}else{
	 	printf("invalid input");}
	
}//end main
