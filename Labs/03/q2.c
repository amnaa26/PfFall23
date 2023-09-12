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
                    
 question#2
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
                    
          
