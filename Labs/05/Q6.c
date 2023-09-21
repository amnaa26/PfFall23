#include <stdio.h>

/*
Write a C program to receive an 8-bit number into a variable and then check if its 4th and
7th bits are on. If these bits are found to be on, then put them off.
   */

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
