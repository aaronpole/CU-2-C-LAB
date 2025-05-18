#include <stdio.h>

int main(){

    // Get number of rows and columns
    int rows = 2, columns=2;
    int a[rows][columns];

    // Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // Calculate determinant
    int determinant = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    printf("Determinant = %d\n",determinant);
    return 0;
}