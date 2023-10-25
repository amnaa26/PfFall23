/* Programmer: Amna(23K-0066)
 * Desc: Validating password
 * Date: 24/10/2023
*/

#include <stdio.h>
#include <string.h>

int main() {
	char check[] = {'Secure123'};
	char pass[1000];
	printf("Enter password:");
	gets(pass);
	if(strlen(pass) >= 8 && strcmp(check,pass) == 0) 
		printf("Login successful. Welcome!");
	else 
		printf("Login failed. Incorrect password.");
}
