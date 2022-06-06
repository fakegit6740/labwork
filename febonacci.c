#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    int c = a + b;
    printf("%d %d ", a , b);

    for(int i = 2; i < n; i++) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
}