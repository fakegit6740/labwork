#include <stdio.h>

void main() {
    char a;
    scanf("%c", &a);
    (a >= 65 && a <= 90) ? printf("It is a alphabet") : (a >= 97 && a <= 122) ? printf("It is a alphabet") : printf("It is not a alphabet");
}