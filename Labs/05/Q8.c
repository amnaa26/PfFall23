#include <stdio.h>

int main()
{
   int number;
   printf("Enter the value of light sensor: ");
   scanf("%d", &number);
   if (number > 500 && number <= 1000)   printf("Sunshine\n");
   else if (number >= 0 && number <= 100)   printf("Evening\n");
   else if (number >= 100 && number <= 500)   printf("Lightning\n");
   else   printf("Invalid input\n");
}