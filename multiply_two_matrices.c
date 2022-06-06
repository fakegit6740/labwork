#include <stdio.h>

void main() {
    int m,n;
    scanf("%d%d", &m, &n);

    int mat1[m][n];
    int mat2[n][m];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           // scanf("%d", &mat1[i][j]);
            scanf("%d", *(mat1 + i) + j);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           // scanf("%d", &mat1[i][j]);
            scanf("%d", *(mat2 + i) + j);
        }
    }



    int mat_multiplied[m][m];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            *(*(mat_multiplied + i) + j) = 0;
            for(int k = 0; k < n; k++) {
                *(*(mat_multiplied + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", *(*(mat_multiplied + i)+j));
        }
        printf("\n");
    }
}