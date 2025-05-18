#include <stdio.h>

int main(){

    // Get no. of rows and columns
    int n, rowsum = 0, columnsum = 0;
    int rows, columns;
    int i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("\n");

    // Input Matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // Calculate column sum
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            columnsum += a[j][i];
        }
        printf("Sum of column %d is : %d\n",i+1,columnsum);
        columnsum = 0;
    }
    printf("\n");

    // Calculate row sum
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            rowsum += a[i][j];
        }
        printf("Sum of row %d is : %d\n",i+1,rowsum);
        rowsum = 0;
    }

    return 0;

}