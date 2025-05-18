#include <stdio.h>

int add(int a, int b);

int main(){
    int a,b;
    printf("Enter number 1 : \n");
    scanf("%d",&a);
    printf("Enter number 2 : \n");
    scanf("%d",&b);
    printf("Sum : %d",add(a,b));
    return 0;
}

int add(int a, int b){
    return a+b;
}