#include <stdio.h>

int find_xor(int n){
    if(n % 4 == 0) {
        return n;
    }
    else if(n % 4 == 1) {
        return 1;
    }
    else if(n % 4 == 2) {
        return n + 1;
    }
    else{
        return 0;
    }
}

void main() {
    int n;
    scanf("%d", &n);
    int out = find_xor(n);
    printf("%d", out);
}