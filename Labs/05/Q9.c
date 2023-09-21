#include <stdio.h>
#include <math.h>

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