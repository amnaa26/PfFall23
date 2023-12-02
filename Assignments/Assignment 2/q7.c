/*
*Name: Amna
*Des: Program to manage and sort shirt details for a clothing store.
*Date: 30/10/2023
*/

#include<stdio.h>

int main() {
    int i, j, a;
    
    printf("Enter the number of shirts:\n");
    scanf("%d", &a);
    
    // Declare a 2D array to store age and price of shirts
    int arr[a][2];
    
    // Loop to input age and price for each shirt
    for(i = 0; i < a; i++) {
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &arr[i][0]);
        
        printf("Enter price for shirt %d: ", i + 1);
        scanf("%d", &arr[i][1]);
    }

    int temp, temp2;

    // Sorting the array based on age (arr[i][0])
    for(i = 0; i < a; i++) {
        for(j = i + 1; j < a; j++) {
            if(arr[i][0] > arr[j][0]) {
                temp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = temp;
            }
        }
    }

    // Sorting the array based on price (arr[i][1])
    for(i = 0; i < a; i++) {
        for(j = i + 1; j < a; j++) {
            if(arr[i][1] < arr[j][1]) {
                temp2 = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = temp2;
            }
        }
    }

    // Displaying the sorted array of shirts' age and price
    for(i = 0; i < a; i++) {
        printf("%d\t%d\n", arr[i][0], arr[i][1]);
    }

    return 0;
}
