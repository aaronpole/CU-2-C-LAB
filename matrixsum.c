#include <stdio.h>

int main(){

    //Enter no of rows and columns
    int rows, columns;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns];
    int b[rows][columns];
    int c[rows][columns];

    //Enter matrix 1 and 2
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    //Add and paste them on to matrix c
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    //Print matrix c
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}