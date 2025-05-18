#include <stdio.h>

int main(){
    int population = 1000000;
    for (int i = 9; i>0; i--){
        printf("Population in year %d : %d\n",i,((population*10*i)/100));
    }
    return 0;
}