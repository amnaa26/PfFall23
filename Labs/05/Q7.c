#include <stdio.h>

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