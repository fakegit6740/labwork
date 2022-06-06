#include <stdio.h>

void main() {
    int nm, n;
    printf("Enter number and bit position:- ");
    scanf("%d%d", &nm, &n);

    int bit_mask = 1 << n;

    bit_mask = ~(bit_mask);

    int out = nm & bit_mask;
    printf("%d", out); 
}