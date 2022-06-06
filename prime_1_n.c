#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        int flg = 1;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flg = 0;
                break;
            }
        }
        if(flg == 1) {
            printf("%d ", i);
        }
    }
}