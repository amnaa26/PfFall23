/*
*Name: Amna
*Des: Program to find the persistance of a number
*Date: 30/10/2023
*/

#include <stdio.h>

// Function to calculate persistence of a number
int calculate_persistence(int num) {
    int persistence = 0;
    
    // Check for number greater than 1
    if (num < 10) {
        return persistence; // If num is a single digit, persistence is 0
    }

    while (num >= 10) {
        int product = 1;
        
        // Calculate the product of digits without modifying original number
        int temp = num;
        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }
        
        num = product;
        persistence++;
    }
    return persistence;
}

int main() {
    int num;
    
    // Loop to calculate persistence for positive integers
    while (1) {
        printf("Enter a positive integer (EOF to quit): ");
        
        // Check for valid input
        if (scanf("%d", &num) == 1) {
            if (num < 1) {
                printf("Please enter a positive integer.\n");
            } else {
                int persistence = calculate_persistence(num);
                printf("The persistence of %d is %d\n", num, persistence);
            }
        } else {
            break; // Terminate on EOF
        }
    }
    return 0;
}
