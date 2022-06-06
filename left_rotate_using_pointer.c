#include <stdio.h>

void left_rotate(int *arr, int n, int ind) {
    for(int i = 0; i <= ind; i++) {
        int ele = *(arr+n-1);
        for(int j = n-1; j >= 0; j--) {
            *(arr+j) = *(arr+j-1);
        }
        *arr = ele;
    }
}


void main() {
    int arr[] = {1,2,3,4,5,6,7};
    left_rotate(arr, 7, 3);
    for(int i = 0; i < 7; i++) {
        printf("%d ", *(arr+i));
    }
}