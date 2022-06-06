#include <stdio.h>

void main() {
    int days;
    scanf("%d", &days);
    printf("%d Years ", days / 365);
    days = days % 365;
    printf("%d Months ", days / 12);
    days = days % 12;
    printf("%d weeks ", days / 7);
    days = days % 7;
    printf("%d days", days);
}