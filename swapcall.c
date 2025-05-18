#include <stdio.h>

void swap (int *a1, int *b1);

int main(){
    int a = 10;
    int b = 20;
    printf("Before Swap - A : %d, B : %d\n",a,b);
    swap(&a,&b);
    printf("After Swap - A : %d, B : %d\n",a,b);
    return 0;
}

void swap (int *a1, int *b1){
    int temp = *a1;
    *a1 = *b1;
    *b1 = temp;
    printf("Inside Function - A : %d, B : %d\n",*a1,*b1);
}