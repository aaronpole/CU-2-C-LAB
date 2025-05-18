#include <stdio.h>

int gcd (int a, int b);

int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("GCD : %d\n",gcd(a,b));
    return 0;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return gcd(b,a % b);
    }
}