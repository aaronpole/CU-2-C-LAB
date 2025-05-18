#include <stdio.h>

int main(){
    int maxnum = 10000;
    for (int num = 1; num <= maxnum; num++){
        int foundpairs = 0;
        for (int i = 1; i*i*i < num; i++){
            for (int j = i; i*i*i + j*j*j <= num; j++){
                if (i*i*i + j*j*j == num){
                    foundpairs++;
                    if (foundpairs == 2){
                        printf("%d = %d^3 + %d^3\n", num, i, j);
                        break;
                    }
                }
            }
            if (foundpairs == 2){
                break;
            }
        }
    }
    
    return 0;
}