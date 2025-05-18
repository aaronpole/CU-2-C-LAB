#include <stdio.h>

void arrayfunctions(int *arr,int length);

int main(){
    int arr [5] = {1,2,3,4,5};
    arrayfunctions(arr,5);
    return 0;
}

void arrayfunctions (int *arr, int length){
    int sum = 0;
    int smallest = *arr,largest = *arr;
    for (int i = 0; i < length; i++){
        sum += *(arr+i);
        if (*(arr+i)<smallest){
            smallest = *(arr+i);
        }
        else if (*(arr+i) > largest){
            largest = *(arr + i);
        }
    }

    
    printf("Largest : %d\nSmallest : %d\nSum : %d\n",largest,smallest,sum);
    printf("Average : %.2f\n", (float)sum/length);
}