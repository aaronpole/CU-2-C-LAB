#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum;
    int *ptr;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    if (ptr == NULL){
        printf("Error\n");
    }

    for (int i = 0; i<n; i++){
        printf("Enter the element : ");
        scanf("%d",&ptr[i]);
        sum += ptr[i];
    }
    printf("Sum : %d\n",sum);
    free(ptr);
    return 0;

}