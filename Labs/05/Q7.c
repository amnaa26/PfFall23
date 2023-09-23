/*
* Programmer: Amna(23K-0066)
* Date      : 19th Sept'2023
* Description: This is task 7 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

/*
An online shopping store is providing discounts on the items due to the Eid. If the cost of items is more than 1999
it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% discount will be applied.
If the cost of shopping is 4001 to 6000, a 30% discount will be applied. If it's more than 6000 then
50% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount.
   */

int main()
{
   double items_cost, shipping_cost, amount, amount_saved = 0;
   printf("Enter cost of items followed by shipping cost: ");
   scanf("%lf %lf", &items_cost, &shipping_cost);
   
   if (items_cost > 1999)                                   amount_saved += items_cost * 0.5;
   if (shipping_cost > 2000 && shipping_cost < 4000)        amount_saved += shipping_cost * 0.2;
   else if (shipping_cost > 4001 && shipping_cost < 6000)   amount_saved += shipping_cost * 0.3;
   else if (shipping_cost > 6000)                           amount_saved += shipping_cost * 0.5;

   amount = items_cost + shipping_cost;
   
   printf("Actual amount: %lf\n", amount);
   printf("Saved amount: %lf\n", amount_saved);
   printf("Amount after discount: %lf\n", amount - amount_saved);
}   
