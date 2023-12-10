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
        }
    }

    fclose(file);
    return matrix;
}

// Function to extract a submatrix of specified size from an 8x8 matrix
int **extractSubMatrix(int **matrix, int size, int subSize) {
    int **subMatrix = (int **)malloc(subSize * sizeof(int *));
    if (subMatrix == NULL) {
        fprintf(stderr, "Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < subSize; ++i) {
        subMatrix[i] = (int *)malloc(subSize * sizeof(int));
        if (subMatrix[i] == NULL) {
            fprintf(stderr, "Memory allocation failed");
            exit(EXIT_FAILURE);
        }

        for (int j = 0; j < subSize; ++j) {
            subMatrix[i][j] = matrix[i][j];
        }
    }

    return subMatrix;
}

// Function to print a matrix
void printMatrix(int **matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d	", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//function of finding max submatrix
void computeSubMatrix(int** matrix, int size){
    int newRows = size / 2;
    int newCols = size / 2;
    int **resultMatrix = (int **)malloc(newRows * sizeof(int *));
    if (resultMatrix == NULL) {
        fprintf(stderr, "Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < newRows; ++i) {
        resultMatrix[i] = (int *)malloc(newCols * sizeof(int));
        if (resultMatrix[i] == NULL) {
            fprintf(stderr, "Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        
        for (int j = 0; j < newCols; ++j) {
            int maxVal = matrix[2 * i][2 * j];
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < 2; ++l) {
                    if (matrix[2 * i + k][2 * j + l] > maxVal) {
                        maxVal = matrix[2 * i + k][2 * j + l];
                    }
                }
            }
            resultMatrix[i][j] = maxVal;
        }
    }
    
    // Printing the resultant max submatrix
    for (int i = 0; i < newRows; ++i) {
        for (int j = 0; j < newCols; ++j) {
            printf("%d	", resultMatrix[i][j]);
        }
        printf("\n");
    }
    
    // Free allocated memory
    for (int i = 0; i < newRows; ++i) {
        free(resultMatrix[i]);
    }
    free(resultMatrix);
}



int main(int argc, char *argv[]) {
	char *filename = "matrix.txt";
	
	int size = 8, subSize;
	printf("Name: Amna\nID: 23K-0066\n\n");
	printf("Enter the dimension of array (enter either 2, 4 or 8): ");
	scanf("%d", &subSize);
	while(!(subSize == 2 || subSize == 4 || subSize == 8)){
		printf("Entered dimension is incorrect\nPlease enter again");
		scanf("%d",&subSize);
	}

	int **matrix = readMatrixFromFile(filename, size);
	int **subMatrix = extractSubMatrix(matrix, size, subSize);
	printMatrix(subMatrix, subSize);
	printf("\nSub-matrix with maximum values\n");
 	computeSubMatrix(subMatrix, subSize);

    
	// Free allocated memory for the original matrix
	for (int i = 0; i < size; ++i) {
		free(matrix[i]);
    	}
   	 free(matrix);

   	 return EXIT_SUCCESS;
}
