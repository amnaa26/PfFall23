/*
*Programmer: Amna(23K-0066)
*Date: 10/122023
*Descrition: Create three text files named Department.txt, Personal.txt and Combine.txt. The Personal.txt file contains
 ID and Name. Whereas the Department.txt file contains ID and Salary. Write a function that takes input
 as record IDs and mergesthe details from both personal and department files and then add this entry into
 the Combine.txt file (ID, Name, Salary).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100
#define f_personal "Personal.txt"
#define f_department "Department.txt"
#define f_combine "Combine.txt"

int main() {
    printf("Name: Amna\nID: 23K-0066\n\n");
    char id[BUFFER_SIZE], line[BUFFER_SIZE], temp[BUFFER_SIZE];
    
    printf("Enter ID to merge: ");
    fgets(id, BUFFER_SIZE, stdin);
    id[strcspn(id, "\n")] = '\0';

    FILE *personalFile = fopen(f_personal, "r");
    FILE *departmentFile = fopen(f_department, "r");
    FILE *combineFile = fopen(f_combine, "a");

    if (personalFile == NULL || departmentFile == NULL || combineFile == NULL) {
        perror("Error opening files");
        return EXIT_FAILURE;
    }

    while (fgets(line, BUFFER_SIZE, personalFile) != NULL) {
        if (strstr(line, id) != NULL) {
            strcpy(temp, line);
            break;
        }
    }

    while (fgets(line, BUFFER_SIZE, departmentFile) != NULL) {
        if (strstr(line, id) != NULL) {
            strcat(temp, line);
            break;
        }
    }

    fprintf(combineFile, "%s\n", temp);

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);

    printf("Merging operation completed.\n");
    return EXIT_SUCCESS;
}

