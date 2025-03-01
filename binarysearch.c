#include <stdio.h>

int main(){
    int n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in sorted order : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int low = 0, high = n-1, found = 0;
    while (low <= high){
        int mid = (low + high)/2;

        if (arr[mid] == x){
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        if (arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    
    if(!found){
        printf("Element not found");
    }

    return 0;
}