/*
 * Programmer : Amna(23K-0066)
 * Date :  26/11/2023
 * Desc : Create a structure named Date having day, month and year as its elements. Store the current
          date in the structure. Now add 45 days to the current date and display the final date.
*/

#include <stdio.h>

// Define the structure for Date
struct Date {
    int d;
    int m;
    int y;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month and year
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month];
}

// Function to add days to a date
struct Date addDays(struct Date currentDate, int daysToAdd) {
    while (daysToAdd > 0) {
        int daysInMonth = getDaysInMonth(currentDate.m, currentDate.y);
        if (currentDate.d + daysToAdd > daysInMonth) {
            daysToAdd -= (daysInMonth - currentDate.d + 1);
            currentDate.d = 1;
            if (currentDate.m == 12) {
                currentDate.m = 1;
                currentDate.y++;
            } else {
                currentDate.m++;
            }
        } else {
            currentDate.d += daysToAdd;
            daysToAdd = 0;
        }
    }
    return currentDate;
}

int main() {
    // Get the current date
    struct Date currentDate;
    printf("Enter current date (day month year): ");
    scanf("%d %d %d", &currentDate.d, &currentDate.m, &currentDate.y);

    // Add 45 days to the current date
    struct Date finalDate = addDays(currentDate, 45);

    // Display the final date
    printf("Current Date: %02d/%02d/%04d\n", currentDate.d, currentDate.m, currentDate.y);
    printf("Final Date: %02d/%02d/%04d\n", finalDate.d, finalDate.m, finalDate.y);

    return 0;
}
