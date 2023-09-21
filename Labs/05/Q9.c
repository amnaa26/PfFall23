#include <stdio.h>
#include <math.h>

/*
Write a C program to find all roots of a quadratic equation, it is required to take user input 
for a, b and c values. Find discriminant using formula
discriminant=b ×b-(4×a×c)
Compute roots based on the nature of discriminant.
   */

int main()
{
   double a, b, c, discriminant, root1, root2, real, imaginary;
   printf("Enter a, b and c: ");
   scanf("%lf %lf %lf", &a, &b, &c);
   discriminant = b * b - 4 * a * c;

   if (discriminant >= 0) {
      root1 = (-b + sqrt(discriminant)) / (2 * a);
      root2 = (-b - sqrt(discriminant)) / (2 * a);
      printf("(%lf, %lf)", root1, root2);
   }
   else {
      discriminant *= -1;
      real = -b / (2 * a);
      imaginary = sqrt(discriminant) / (2 * a);
      printf("(%lf + %lfi, %lf - %lfi)", real, imaginary, real, imaginary);
   }
}
