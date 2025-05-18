#include <stdio.h>

int main(){
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            if ( i + j == 3){
                printf("%d %d %d\n",i,j,i+j);
                printf("%d %d %d\n",i,i+j,j);
                printf("%d %d %d\n",i+j,j,i);
            }
        }
    }
    return 0;
}