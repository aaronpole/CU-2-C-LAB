#include <stdio.h>

int recfib(int n1);

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%dth term of series : %d ",n,recfib(n-1));
    return 0;
}

int recfib(int n1){
    if (n1 == 0) return 0;
    else if (n1 == 1) return 1;
    return recfib(n1-1) + recfib(n1-2);
}