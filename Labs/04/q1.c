/*
* Programmer: Amna(23K-0066)
* Date      : 12th Sept'2023
* Description: This is task 1 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

int main() {
           int n;
           printf("Enter an integer: ");
           scanf("%d",&n);

            int i=0;
            while(i<=n) {
               int r=i;
                   i=i+1;
                 while(r>0) {
                      r=r-1;
                      printf("*");
                           };
                     
                      printf("\n");
                 };
            return 1;
}// end main
