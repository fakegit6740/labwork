#include <stdio.h>

void main() {
    char str1[13] = "naman";
    char str2[13];
    int c = 0;
    int ln = 0;
    while(ln++, *(str1+ln));
    ln--;
    A:
    if(*(str1 + c)){
    *(str2 + c) = *(str1 + ln - c);
    c++;
    goto A;
    }

    str2[c] = '\0';
    int flg = 0;
    c = 0;
    B:
    if(*(str2 + c)){
        if(*(str1 + c) != *(str2 + c)){
            *(str2 + c) = '\0';
            flg = 0;
            goto B;
        }
        else{
            c++;
            flg = 1;
            goto B;
        }
    }

    if(flg == 1) {
        printf("String is palindrome!");
    }
    else{
        printf("String is not palindrome!");
    }
    
}