#include <stdio.h>

int main() 
{
   int number, bit4, bit7;
   printf("Enter an 8-bit number: ");
   scanf("%d", &number);
   bit4 = number / 1000 % 10;
   bit7 = number / 1000000 % 10;
   if (bit4 == 1)   number -= 1000;
   if (bit7 == 1)   number -= 1000000;
   printf("%08d\n", number);
}   