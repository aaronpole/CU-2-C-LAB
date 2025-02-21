#include <stdio.h>
int main(){
    int r, a, b;
    printf("Enter the radius : ");
    scanf("%d", &r);
    printf("Enter point a :");
    scanf("%d", &a);
    printf("Enter point b :");
    scanf("%d", &b);
    if(a*a + b*b < r*r){
        printf("The point is inside the circle");
    }
    else if (a*a + b*b == r*r){
        printf("The point is on the circle");
    }
    else{
        printf("The point is outside the circle");
    }
}