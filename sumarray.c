#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of subjects : ");
    scanf("%d",&n);
    int marks[n],sum = 0;
    for (int i = 0; i < n; i++){
        printf("Enter marks of the subject : ");
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    printf("Sum : %d\n",sum);
    printf("Average : %d",sum/n);
    return 0;
}