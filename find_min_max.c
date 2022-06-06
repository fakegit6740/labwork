#include <stdio.h>

void main() {
    printf("Enter Length of array:- ");
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("Enter Elements:- ");
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }

    int *max = arr;
    int *min = arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > *max) {
            max = arr + i;
        }
        else if(*(arr + i) < *min) {
            min = arr + i;
        }
    }
    printf("%d %d", *min, *max);

}