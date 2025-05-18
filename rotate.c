#include <stdio.h>

int main(){
    // Enter length of array
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];

    // Enter elements
    for (int i = 0; i < n; i++){
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }

    // Enter steps to rotate
    int k;
    printf("Enter steps to rotate : ");
    scanf("%d",&k);

    k = k%n;

    // Add last k elements from rotated array to temp array
    int temp[n];
    for (int i = 0; i < n; i++){
        temp[i] = arr[(n-k+i)%n];
    }

    for (int i = 0; i < n; i++){
        arr[i]= temp[i];
    }

    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}