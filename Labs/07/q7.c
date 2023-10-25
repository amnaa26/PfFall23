/*
 * Programmar: Amna(23K-0066)
 * Desc: Multiplying two matrices of 2 x 2
 * Date: 10/10/2023
 */

#include <stdio.h>

int main() {
   int arr1[2][2];
   int arr2[2][2];
   int arr3[2][2];
   int product, row1 = 2, col1 = 2, row2 = 2, col2 = 2;

   printf("Enter values for rows and columns for matrix 1:\n");
   for (int i = 0; i < row1; ++i)
      for (int j = 0; j < col1; ++j){
         printf("Enter value for row %d and column %d:", i + 1, j + 1);
         scanf("%d", &arr1[i][j]);
      }

   printf("Enter values for rows and columns for matrix 2:\n");
   for (int i = 0; i < row2; ++i)
      for (int j = 0; j < col2; ++j){
         printf("Enter value for row %d and column %d:", i + 1, j + 1);
         scanf("%d", &arr2[i][j]);
      }

   for (int i = 0; i < 2; ++i)
      for (int j = 0; j < 2; ++j){
         product = 0;
         for (int k = 0; k < 2; ++k){
            product += arr1[i][k] * arr2[k][j];
         }
         arr3[i][j] = product;
      }

   for (int i = 0; i < row1; ++i){
      for (int j = 0; j < col2; ++j)
         printf("%d ", arr3[i][j]);
      printf("\n");
   }
}