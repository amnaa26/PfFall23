/*
 * Programmer: Amna
 * Date: 28/11/2023
 * Desc: Read any CSV file and print total number of rows and columns before displaying its data in a tabular form using , \t and '|'. Assume that first line is the header and when displaying it, it must be followed by a blank line before displaying the data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	FILE *file = fopen("file.csv", "r");
	if (file == NULL){
		printf("Error in opening file\n");
	}
	
	char line[1024];
	char *token;
	int rows = 0, cols = 0;
	char *header = NULL;
	
	if(fgets(line, sizeof(line),file) != NULL){
		header = strdup(line);
		rows++ ;
		token = strtok(line, ",");
		while(token != NULL) {
			cols++ ;
			token = strtok(NULL, ",");
		}
    }  
		
	// Count rows and columns
    while (fgets(line, sizeof(line), file) != NULL) {
        rows++;
    }

    // Display total rows and columns
    printf("Total rows: %d\n", rows);
    printf("Total columns: %d\n\n", cols);

    // Display header followed by a blank line
    printf("%s\n\n", header);

    // Reset file pointer to beginning
    fseek(file, 0, SEEK_SET);

    // Skip the header
    fgets(line, sizeof(line), file);

    // Display data in a tabular form
    while (fgets(line, sizeof(line), file) != NULL) {
        char *data = strtok(line, ",");
        printf("| %s", data);
        while ((data = strtok(NULL, ",")) != NULL) {
            printf("\t| %s", data);
        }
        printf("\t|\n");
    }

    free(header);
    fclose(file);

    return 0;
}
