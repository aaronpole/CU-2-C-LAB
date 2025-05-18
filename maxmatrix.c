#include <stdio.h>

int main(){

    // Get number of rows and columns
    int rows, columns;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    int a[rows][columns];
    int largest, smallest;

    // Input matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    largest = a[0][0];
    smallest = a[0][0];

    // Calculate largest and smallest element
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (a[i][j] > largest){
                largest = a[i][j];
            }
            if (a[i][j] < smallest){
                smallest = a[i][j];
            }
        }
    }

    printf("Largest element : %d\nSmallest Element : %d\n",largest,smallest);
    return 0;
}