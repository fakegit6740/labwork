#include <stdio.h>

void bubble_sort(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(*(arr+j) > *(arr+j+1)) {
                int temp = *(arr+j+1);
                *(arr+j+1) = *(arr+j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1,2,4,6,1,8,10,100,32,67};
    bubble_sort(arr,10);
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(arr+i));
    }
}