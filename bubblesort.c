#include <stdio.h>

int main (){

    // Get array length
    int n, temp;
    int swapped = 0;
    printf("Enter the length of the array : ");
    scanf("%d",&n);

    // Input array
    printf("\n");
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }
    printf("\n");

    // Compare each element with other elements of list
    for ( int i = 0; i < n; i++){
       swapped = 0;
        for (int j = 0; j < n-i-1; j++){           
                if (a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    swapped = 1;
                }              
        }
        
        if (swapped == 0){
            break;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

    return 0;

}