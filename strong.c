#include <stdio.h>
int fact (int a);

int main(){

    int num;
    int fact(int a){
        if (a==0) return 1;
        return a*(fact(a-1));
    }

    printf("Enter the number : ");
    scanf("%d",&num);
    
    int temp=num;
    int factsum = 0;
    while (num!=0){
        factsum += (fact(num%10));
        num = num/10;
    }

    if (factsum == temp){
        printf("Strong Number\n");
    }

    else{
        printf("Not Strong\n");
    }

    return 0;
}