#include <stdio.h>
#include <string.h>
void main() {

    char str[1000];
    str[0] = ' ';
    scanf("%[^\n]%*c", str);
    //printf("%d", strlen(str));
    int ind = strlen(str) - 1;
    for(int i = ind; i >= 0; i--) {
        if(i == 0) {
            for(int j = 0; j <= ind; j++) {
                printf("%c", str[j]);
            }
        }
        else if(str[i] == ' '){
            for(int j = i+1; j < ind+1; j++) {
                printf("%c", str[j]);
            }
            printf("%c", ' ');
            ind = i-1;
        }
    }
}