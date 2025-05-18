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
            n--; //Decrease array sixe
            i--; //Recheck this index because now it has diiferent element which might be i
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}