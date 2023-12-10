/*
 * Programmer : Amna(23K-0066)
 * Desc: Creates a matrix from the max values of a matrix's submatrix
 * Date : 10/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

//function to read file
int **readMatrixFromFile(char *filename, int size) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int **matrix = (int **)malloc(size * sizeof(int *));
    if (matrix == NULL) {
        fprintf(stderr, "Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; ++i) {
        matrix[i] = (int *)malloc(size * sizeof(int));
        if (matrix[i] == NULL) {
            fprintf(stderr, "Memory allocation failed");
            exit(EXIT_FAILURE);
        }

        for (int j = 0; j < size; ++j) {
            if (fscanf(file, "%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Error reading file");
                exit(EXIT_FAILURE);
            }
	    printf("Read value: %d\n", matrix[i][j]); 
        }
    }
 
    fclose(file);
    return matrix;
}


//function of finding max submatrix
void computeSubMatrix(int** matrix, int size){
    int i, j;
    int newRows = size / 2;
    int newCols = size / 2;
    int **resultMatrix = (int **)malloc(newRows * sizeof(int *));
    for (i = 0; i < newRows; ++i) {
        resultMatrix[i] = (int *)malloc(newCols * sizeof(int));
    }
    for (i = 0; i < newRows; ++i) {
        for (j = 0; j < newCols; ++j) {
            int maxVal = matrix[i][j];
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < 2; ++l) {
                    if (matrix[k][l] > maxVal) {
                        maxVal = matrix[k][l];
                    }
                }
            }
            resultMatrix[i][j] = maxVal;
        }
    }
    // printing the resultant max submatrix
    for (i = 0; i < newRows; ++i) {
        for (j = 0; j < newCols; ++j) {
            printf("%d  ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    // Free allocated memory
    for (i = 0; i < newRows; ++i) {
        free(resultMatrix[i]);
    }
    free(resultMatrix);
}


int main(int argc, char *argv[]) {
	char *filename = "matrix.txt";
	
	int size;
	printf("Name: Amna\nID: 23K-0066\n\n");
	printf("Enter the dimension of array (enter either 2, 4 or 8): ");
	scanf("%d", &size);
	while(!(size == 2 || size == 4 || size == 8)){
		printf("Entered dimension is incorrect\nPlease enter again");
		scanf("%d",&size);
	}

	int **matrix = readMatrixFromFile(filename, size);
 	computeSubMatrix(matrix, size);

    
	// Free allocated memory for the original matrix
	for (int i = 0; i < size; ++i) {
		free(matrix[i]);
    	}
   	 free(matrix);

   	 return EXIT_SUCCESS;
}
