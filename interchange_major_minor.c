#include <stdio.h>

void main() {
    int m,n;
    scanf("%d%d", &m, &n);

    int mat1[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           // scanf("%d", &mat1[i][j]);
            scanf("%d", *(mat1 + i) + j);
        }
    }
    int *add1, *add2, c = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                add1 = *(mat1 + i) + j;
                
            }
            if(i+j == n-1){
                add2 = *(mat1 + i) + j;
            }
        }
        //printf("BS : %d %d\n", *add1, *add2);
        int ele = *add1;
        *add1 = *add2;
        *add2 = ele;
        
       //printf("A.S : %d %d\n", *add1, *add2);
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           // scanf("%d", &mat1[i][j]);
            printf("%d ", *(*(mat1 + i) + j));
        }
        printf("\n");
    }

}