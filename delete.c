#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("Enter element to delete : ");
    int del;
    scanf("%d", &del);
    for (int i = 0; i < n; i++){
        if (a[i] == del){
            for (int j = i; j < n-1; j++){
                a[j] = a[j+1];
            }
            break;
        }
    }
    for (int i = 0; i < n-1; i++){
        printf("%d ", a[i]);
    }
    return 0;
}