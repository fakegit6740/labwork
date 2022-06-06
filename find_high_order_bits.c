#include <stdio.h>

void main(){
    int size = sizeof(int) * 8;
    int n;
    scanf("%d", &n);
    int pos = 0;
    for(int i = 0; i < size; i++) {
        if((n >> i) & 1) {
            pos = i;
        } 
    }
    printf("%d", pos);
}