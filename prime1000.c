#include <stdio.h>
int main(){
    for (int i = 2; i<1000; i++){
        int isPrime = 1;
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                isPrime = 0;
            }
        }
        if (isPrime){
            printf("%d ", i);
        }
    }
    return 0;
}