#include <stdio.h>

void main() {
    int arr[5] = {1,2,3,4};
    int ind = 0;

    for(int i = 4; i > 0; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + ind) = 100;
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    
}