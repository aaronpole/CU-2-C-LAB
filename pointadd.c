#include <stdio.h>

int add(int *a1, int *b2);

int main(){
    int a, b;
    printf("Enter element : ");
    scanf("%d",&a);
    printf("Enter element : ");
    scanf("%d",&b);
    printf("Sum : %d\n",add(&a,&b));
}

int add(int *a1, int *b1){
    return *a1 + *b1 ;
}