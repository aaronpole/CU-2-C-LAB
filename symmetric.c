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

    int symmetric = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (a[i][j] != b[i][j]){
                symmetric = 1;
                break;
            }
        }
    }

    if (symmetric == 0){
        printf("Symmetric Matrix\n");
    }
    
    else{
        printf("Not Symmetric\n");
    }

    return 0;
}