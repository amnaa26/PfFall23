#include <stdio.h>
#include <string.h>

int main() {
	char check[] = {'Secure123'};
	char pass[1000];
	printf("Enter password:");
	gets(pass);
	if(strlen(pass) >= 8) {
		if(strcmp(pass,check) == 0){
			printf("Login successful. Welcome!");
		}
		else 
			printf("Login failed. Incorrect password.");
	}
	else 
			printf("Login failed. Incorrect password.");
}
