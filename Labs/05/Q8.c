/*
* Programmer: Amna(23K-0066)
* Date      : 19th Sept'2023
* Description: This is task 8 file
* Related files:
*/

//--Include Files--//
#include <stdio.h>

/*
An android developer wants to design a mobile feature to control the brightness of the mobile phone according 
to the surrounding light. In order to do it he uses an ambient light sensor (for the detection of surrounding light) 
which is commonly built in in all latest android phones. It gives the value of light intensity in integers. 
Write a C program for Light sensor value ranges from 0-1000, if it's exposed under sunshine (>500), 
if it's evening then (0 ~ 100), lighting (100 to 500).
   */

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
