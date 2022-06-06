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
    int arr1[n];
    int ind = 0;
    for(int i = 0; i < n; i++) {
        int c = 0;
        int flg = 1;
        for(int j = 0; j < n; j++) {
            if(*(arr + i) == *(arr1 + j)) {
                flg = 0;
                break;
            }
        }
        
        if(flg == 1) {
            for(int j = 0; j < n; j++) {
                if(*(arr+i) == *(arr+j)) {
                    c++;
                }
            }
            *(arr1+ind++) = *(arr+i);
            printf("%d : %d\n", *(arr+i), c);
        }

    }
}