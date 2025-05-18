#include <stdio.h>

int main(){

    // Get number of rows and columns
    int rows = 0,columns = 0;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns], b[columns][rows];

    // Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // Calculate transpose
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            b[j][i] = a[i][j];
        }
    } 

    // Display transpose
    printf("Original Matrix\n\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("Transpose Matrix\n\n");
    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}