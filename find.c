#include <stdio.h>
int main(){
    int n, count = 0, ele;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int a[n];
    for (int i =0; i < n; i++){
        printf("Enter A : ");
        scanf("%d",&a[i]);
    }
    printf("Enter element : ");
    scanf("%d",&ele);
    for (int i = 0; i < n; i++){
        if (ele == a[i]){
            count += 1;
        }
    }
    printf("Count : %d",count);
    return 0;
    
}