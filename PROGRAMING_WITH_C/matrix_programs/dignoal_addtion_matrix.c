#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    
    int mat[m][n];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Calculate the sum of the diagonal elements
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                sum += mat[i][j];
            }
        }
    }
    
    printf("The sum of the diagonal elements of the matrix is %d", sum);
    return 0;
}

