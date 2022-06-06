#include <stdio.h>

void main() {
    int year;
    scanf("%d", &year);

    (year % 4 == 0) ? (year % 100 != 0) ? printf("Leap Year") : printf("Not a Leap Year") : (year % 400 == 0) ? printf("Leap Year") : printf("Not a leap year");

}