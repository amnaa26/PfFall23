#include <stdio.h>

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