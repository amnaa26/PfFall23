#include <stdio.h>

int main() {
           int n;
           printf("Enter an integer: ");
           scanf("%d",&n);

            int i=0;
            while(i<n) {
               int r=0;
                 while(r<n) {
                      printf("*");
                      r=r+1;
                             };
                     
                      printf("\n");
                      i=i+1;
                          };
            return 1;
}// end main
                    
          