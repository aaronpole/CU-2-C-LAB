#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The prime numbers are : ");

    for (int i = 0; i<n; i++){
        int flag = 0;
        for (int j = 2; j < arr[i]; j++){
            if (arr[i]%j == 0){
                flag = 1;
                break;
            }
        }
    if (flag == 0){
        printf("%d ", arr[i]);
        }   
    }
}