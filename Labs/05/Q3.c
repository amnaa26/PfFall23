/*
* Programmer: Amna(23K-0066)
* Date      : 19th Sept'2023
* Description: This is task 3 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>
int main() {
	char key;
	printf("Are you sure to delete?[Y/y] / [N/n]:\n");
	printf("Press [Y/y] for yes and [N/n] for no\n");
	scanf("%c", &key);
	switch (key) {
		case 'y' :
		case 'Y' : printf("Deleted Successfully\n"); break;
		case 'n' :
		case 'N' : printf("Delete canceled\n"); break;
		default: printf("Choose the right option\n");
	}
}//end main
