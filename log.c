#include <stdio.h>

int main(){
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    int logx = (x-1) - (x-1)*(x-1)/2 + (x-1)*(x-1)*(x-1)/3 - (x-1)*(x-1)*(x-1)*(x-1)/4 + (x-1)*(x-1)*(x-1)*(x-1)*(x-1)/5 - (x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/6 + (x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/7;
    printf("Sum of Log Series : %d\n", logx);
    return 0;
}