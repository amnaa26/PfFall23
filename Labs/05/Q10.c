#include <stdio.h>

/*
 Write a program to receive an 8-bit number into a variable and then exchange its higher four bits with the
 lower four bits if the entered number includes at least two digits.
   */

int main()
{
   int i, number, factor;
   printf("Enter an 8-bit number: ");
   scanf("%d", &number);

   i = 0;
   factor = 1;
   while (i < 8) {
      if ((number / factor) % 10 == 0)   number += 1 * factor;
      else if ((number / factor) % 10 == 1) number -= 1 * factor;
      factor *= 10;
      ++i;
   }
   printf("%08d", number);
}
