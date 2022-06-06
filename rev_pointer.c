#include <stdio.h>


void rev(int *add, int n) {
    for(int i = n-1; i >= 0; i--) {
        printf("%d ", *(add + i));
    }
}


void main(){

    int arr[] = {1,2,3,4,5};
    rev(arr, 5);
}