#include <stdio.h>

int main(){

    // Get Array length
    int n, key;
    int flag = 0;
    printf("Enter length of the array : ");
    scanf("%d",&n);

    // Input array
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }

    // Get search key
    printf("Enter the search key : ");
    scanf("%d",&key);
    printf("\n");
    
    // Search for element
    for (int i = 0; i < n; i++){
        if (a[i] == key){
            printf("Element found at %dth index\n",i+1);
            flag = 1;
        }
    }

    if (flag == 0){
        printf("Element not in array\n");
    }

    return 0;
}