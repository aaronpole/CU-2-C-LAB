#include <stdio.h>

int main(){

    // Get number of rows and columns
    int rows, columns;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns];
    int diagonalsum = 0;

    // Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // Sum diagonal elements
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (i==j){
                diagonalsum += a[i][j];
            }
        }
    }

    printf("Trace of matrix : %d\n",diagonalsum);
    return 0;

}