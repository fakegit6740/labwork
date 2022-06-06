#include <stdio.h>

void main() {
    char string[1000];
    scanf("%[^\n]%*c", string);
    int c = 0;
    for(int i = 0; string[i]; i++) {
        int flag = 1;
        if(string[i] == ' ') {
           // printf("%d ", i);
            for(int j = i; string[j] ; j++) {
                if(string[j] == ' ' || string[j] == '\0') {
                    flag = 0;
                }
                else{
                    flag = 1;
                   // printf("j:%d ", j);
                    i = j;
                    break;
                    }
            }
           // printf("\n%d",flag);
            if(flag == 1) {
                c++;
        }
        }
    }
    printf("\n%d", c+1);
}