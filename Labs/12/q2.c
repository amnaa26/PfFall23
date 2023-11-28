/*
 * Programmer: Amna
 * Date: 28/11/2023
 * Desc: Make 2 separate blank word files with text, "This is a test.". Open them in a C program as a binary file and compare the contents. Are the 2 files equal?
*/

#include <stdio.h>
#include <stdlib.h>

//Function for comparing files
int compareFiles(FILE *file1, FILE *file2){
	char ch1, ch2;
	while((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
		if(ch1 != ch2)
		     return 0;  	//File1 and File2 are not equal
	}
	if(ch1 != EOF || ch2 != EOF){
		
		//Files have different lengths
		return 0; 
	}
	
	//Both files are equal
	return 1; 
} //End function

	
int main () {
	FILE *file1, *file2;
	
	//Opening files in binary mode
	file1 = fopen("file1.txt", "rb");
	file2 = fopen("file2.txt", "rb");
	
	if(file1 == NULL || file2 == NULL) {
		perror("Error opening files");
		return 1;
	}
	
	//Comparing files
	if(compareFiles(file1, file2)) {
		printf("Files are equal.\n");
	}
	else{
		printf("Files are not equal.\n");
	}
	
	//Closing files
	fclose(file1);
	fclose(file2);
	
	return 0;
}
