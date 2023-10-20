/*
 * Programmar: Amna(23K-0066)
 * Desc: Calculating the frequency of elements of an array
 * Date: 10/10/2023
 */

#include <stdio.h>

int main() {
   int array[100];
   int seen[100];
   int count;
   int arrayLength;
   _Bool found;

   printf("Enter length of the array: ");
   scanf("%d", &arrayLength);

   // Takes input into an array
   for(int i = 0; i < arrayLength; ++i){
      printf("Enter %d element: ", i + 1);
      scanf("%d", &array[i]);
   }


   // Calculates frequency of each element 
   for(int i = 0; i < arrayLength; ++i){
      seen[i] = array[i];
      found = 0;
      // Checks if elements has already been seen
      for(int k = 0; k < i; ++k)
         if (seen[k] == array[i])
            found = 1; 
      // Skips frequency calculation of already seen elements
      if (found)   continue;    

      // Calculates frequency
      count = 1;
      for(int j = i + 1; j < arrayLength; ++j){
         count = array[i] == array[j] ? count + 1 : count;
      }

      printf("The frequency of %d is %d\n", array[i], count);
   } 

}
