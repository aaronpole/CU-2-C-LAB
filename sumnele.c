#include <stdio.h>

int main(){
    int length;
    printf("Enter length of array : ");
    scanf("%d",&length);
    int arr[length];
    for (int i = 0; i<length; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < length; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    int n;
    printf("Enter number of elements to sum : ");
    scanf("%d",&n);

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Sum : %d\n",sum);
    return 0;
}