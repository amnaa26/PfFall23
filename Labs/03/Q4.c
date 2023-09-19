#include <stdio.h>

int main() {
	float original_price, discount, sale_price;
	printf("Enter the original price of the product: ");
	scanf("%f",&original_price);
	printf("Enter the discount: ");
	scanf("%f",&discount);
	discount = original_price * (discount/100);
	sale_price = original_price - discount;
	printf("The price after discount is: ");
	printf("%f\n",sale_price);

}//end main