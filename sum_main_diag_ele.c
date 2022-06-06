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

    int sm = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sm += *(*(mat1 + i) + j);
            }
        }
    }
    printf("Sum is %d", sm);

}