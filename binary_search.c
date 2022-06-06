#include <stdio.h>

int binary_search(int m, int n, int *arr, int ele) {
    int mid = (m + n) / 2;

    if(*(arr + mid) == ele) {
        return mid;
    }

    else if(*(arr + mid) < ele) {
        binary_search(mid + 1, n, arr, ele);
    }

    else if(*(arr + mid) > ele) {
        binary_search(m, mid-1, arr, ele);
    }

}

void main() {
    int arr[] = {1,2,3,4,5};
    int out = binary_search(0,4,arr,3);

    printf("%d", out);
}