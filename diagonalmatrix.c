#include <stdio.h>

int main(){

    // Get number of rows and columns
    int rows,columns;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns];

    // Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //Print only diagonal elements
    if (rows != columns){
        printf("Matrix must be square\n");
    }

    else {
        printf("Diagonal Elements : ");
        for (int i = 0 ; i < rows; i++){
            for (int j = 0; j < columns; j++){
                if (i == j){
                    printf("%d ",a[i][j]);
                }
            }
        }
    }
    
    return 0;
}