#include <stdio.h>

int findmax(int *ar, int length);

int main(){
    int len;
    printf("Enter length of array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    printf("Maximum Element : %d",findmax(arr,len));
    return 0;
}

int findmax (int *ar, int length){
    int max = *ar;
    for (int i = 0; i < length; i++){
        if (*(ar+i) > max) {
            max = *(ar + i);
        }
    }
    return max;
}