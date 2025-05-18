#include <stdio.h>

int sumdigit(int a);
int main(){
    int digit;
    printf("Enter the digit : ");
    scanf("%d",&digit);
    printf("Sum of digits : %d\n",sumdigit(digit));
    return 0;
}

int sumdigit(int a){
    int sum = 0;
    while (a != 0){
        sum += a%10;
        a = a/10;
    }
    return sum;
}