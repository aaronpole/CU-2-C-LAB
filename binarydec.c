#include <stdio.h>

int b2d(int a);

int main(){
    int bin;
    printf("Enter the binary number : ");
    scanf("%d",&bin);
    printf("Decimal value : %d\n",b2d(bin));
    return 0;
}

int b2d(int binary){
    int decimal = 0, base = 1;
    while (binary > 0){
        int last = binary % 10;
        decimal += last * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}