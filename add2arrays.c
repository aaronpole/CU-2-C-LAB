#include <stdio.h>
int main(){
    int n;
    printf("Enter length of the array : ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++){
        printf("Enter A : ");
        scanf("%d",&a[i]);
        printf("Enter B : ");
        scanf("%d",&b[i]);
        c[i] = a[i] + b[i];    
    }
    for (int i = 0; i < n; i++){
        printf("%d ", c[i]);
    }34
    return 0;
}