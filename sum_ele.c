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

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    printf("%d", sum);
}