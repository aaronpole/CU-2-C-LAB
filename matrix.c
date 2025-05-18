#include <stdio.h>

int main(){

    //Get number of rows and columns
    int rows, columns;
    printf("Enter the number of rows in matrix : ");
    scanf("%d",&rows);
    printf("Enter the number of columns in matrix : ");
    scanf("%d",&columns);
    int a[rows][columns];

    //Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d\t",&a[i][j]);
        }
        printf("\n");
    }

    //Display matrix line by line
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}