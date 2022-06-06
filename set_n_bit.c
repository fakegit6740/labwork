#include <stdio.h>

void main() {
    int number, n;
    printf("Enter Number and bit position to change:- ");
    scanf("%d%d", &number, &n);
    int bit_mask = 1 << n;
    int out = number | bit_mask;

    printf("Updated Number: %d", out);
}