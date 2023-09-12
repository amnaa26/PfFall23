#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, det = 0, ans1 = 0, ans2 = 0;
	printf("Enter the value of\n");
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	
	det = b * b - 4 * a * c;
	if (det >= 0) {
		ans1 = (-b + sqrt(det)) / 2 * a;
		ans2 = (-b - sqrt(det)) / 2 * a;
		printf("%0.2lf, %0.2lf\n", ans1, ans2);
	} else 
		printf("The roots are imaginery\n");
	
}//end main
