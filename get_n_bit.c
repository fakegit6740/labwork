#include <stdio.h>

void main() {
    int nm,n;
    printf("Enter number and bit position:- ");
    scanf("%d%d", &nm, &n);

    int bit_mask = 1 << n;

    int out = nm & bit_mask;

    if(out != 0) {
        printf("Bit is 1");
    }
    else{
        printf("Bit is 0");
    }
}