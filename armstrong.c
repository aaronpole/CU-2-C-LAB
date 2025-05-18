#include <stdio.h>

int cube(int a){
    return a*a*a;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int cubesum = 0;
    int temp = n;
    while (temp != 0){
        int last = temp%10;
        cubesum += cube(last);
        temp = temp/10;
    }
    if (n == cubesum){
        printf("Armstrong Number\n");
    }
    return 0;
}