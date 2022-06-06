#include <stdio.h>

void main() {
    int a,b;
    scanf("%d%d", &a,&b);
    printf("Numbers before swapping:- ");
    printf("%d %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("Number after swapping:- ");
    printf("%d %d", a, b);
}