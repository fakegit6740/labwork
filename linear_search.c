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

    int ele;
    printf("Enter element to search:- ");

    scanf("%d", &ele);
    for(int i = 0; i < n; i++){
        if(ele == *(arr+i)){
            printf("%d", i);
            break;
        }
    }

}