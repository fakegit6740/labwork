#include <stdio.h>

void main() {
    char str1[13] = "HELLO WORLD";
    char str2[13];
    int c = 0;
    A:
    if(*(str1+c)){
        *(str2+c) = *(str1+c);
        c++;
        goto A;
    }
    *(str2+c) = '\0';

    printf("%s", str2);
}