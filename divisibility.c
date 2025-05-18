#include <stdio.h>
int  main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0, digit;
    printf("Enter the digit : ");
    scanf("%d",&digit);

    for (int i = 0; i<n; i++){
        if((arr[i] % digit) == 0){
            count += 1;
        }
    }
    printf("Count : %d",count);
    return 0;
}