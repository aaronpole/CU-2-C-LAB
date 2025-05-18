#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("/windows/india/arabic/degen.txt","w");
    if (fp==NULL){
        printf("File not found\n");
        exit(1);
    }
    else{
        printf("File opened successfully\n");
    }

    fclose(fp);
    return 0;
}