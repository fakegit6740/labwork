#include <stdio.h>

void main() {
    int m;
    scanf("%d", &m);
    int arr1[m], arr2[m];

    for(int i = 0; i < m; i++) {
        scanf("%d", arr1 + i);
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", arr2 + i);
    }

    for(int i = 0; i < m; i++) {
        int ele = *(arr1+i);
        *(arr1+i) = *(arr2 + i);
        *(arr2 + i) = ele;
    }

    for(int i = 0; i < m; i++) {
        printf("%d ", *(arr1+i));
    }
    printf("\n");
     for(int i = 0; i < m; i++) {
        printf("%d ", *(arr2+i));
    }
}