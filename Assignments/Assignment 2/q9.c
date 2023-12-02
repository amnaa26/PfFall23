/*
*Name: Amna
*Des: Program to print spiral matrices.
*Date: 30/10/2023
*/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter NxN value: ");
    scanf("%d", &n);

    int arr[n][n]; // Create an NxN matrix

    int i, j = 0;
    // Initialize the matrix elements to 0
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    int l = 0;
    int count = 1;
    // Populate upper-left side of the matrix
    for(l = 0; l < n/2 + n % 2; l++){
        for(i = l; i < n - l; i++){
            if(i == l){
                for(j = l; j < n - l; j++){
                    arr[i][j] = count;
                    count++;
                }
            }
            if(i > l && i < n - 1 - l){
                arr[i][n - 1 - l] = count;
                count++;
            }
            if(i == n - 1 - l && i != (n / 2 + n % 2) - 1){
                for(j = n - 1 - l; j >= l; j--){
                    arr[i][j] = count;
                    count++;
                }
            }
        }
        for(i = n - 2 - l; i > l; i--){
            arr[i][l] = count;
            count++;
        }
    }

    // Display the NxN matrix pattern 1
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n\n");
    }

    // Reset matrix elements to 0
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    printf("\n\n");
    l = 0;
    count = n * n;
    // Populate upper-right side of the matrix
    for(l = 0; l < n / 2 + n % 2; l++){
        for(i = l; i < n - l; i++){
            if(i == l){
                for(j = n - 1 - l; j >= l; j--){
                    arr[i][j] = count;
                    count--;
                }
            }
            if(i > l && i < n - 1 - l){
                arr[i][l] = count;
                count--;
            }
            if(i == n - 1 - l && i != (n / 2 + n % 2) - 1){
                for(j = l; j < n - l; j++){
                    arr[i][j] = count;
                    count--;
                }
            }
        }
        for(i = n - 2 - l; i > l; i--){
            arr[i][n - 1 - l] = count;
            count--;
        }
    }

    // Display the NxN matrix pattern 2
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n\n");
    }

    return 0;
}
