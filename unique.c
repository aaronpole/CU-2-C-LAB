#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int a[n], b[n];
    int bindex = 0;

    for(int i = 0; i < n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++){
        int ele = a[i];
        int isUnique = 1;
        for (int j = 0; j < n; j++){
            if (i != j && a[j] == ele){
                isUnique = 0;
            }
        }
        if (isUnique){
            b[bindex] = ele;
            bindex++;
        }
    }
    for (int i = 0; i < bindex; i++){
        printf("%d ", b[i]);
    }

    return 0;
}