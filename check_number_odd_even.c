#include <stdio.h>

void main() {
    int nm;
    printf("Enter Number to check:- ");
    scanf("%d", &nm);

    int out = nm & 1;
    if(out == 1) {
        printf("Number is odd");
    }
    else {
        printf("Numebr is even");
    }
}