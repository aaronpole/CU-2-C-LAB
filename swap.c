#include <stdio.h>
int main(){
    int n;
    printf("Enter length : ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++){
        printf("Enter A : ");
        scanf("%d",&a[i]);
        printf("Enter B : ");
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < n; i++){
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    for (int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ",b[i]);
    }
    return 0;
}