#include <stdio.h>

void main() {
    char str[] = "yyyyyyy";
    int freq[26] = {0};
    for(int i = 0; *(str + i); i++){
        if(*(str + i) >= 97 && *(str + i) <= 122) {
            *(str + i) -= 32;
        }
    }
    for(int i = 0; *(str + i); i++) {
        freq[*(str + i) - 65]++;
    }
    for(int i = 0; i < 26; i++) {
        if(*(freq + i) != 0) {
        printf("%c : %d\n", i + 65, *(freq + i));
        }
    }
}