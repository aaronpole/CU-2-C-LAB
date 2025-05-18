#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *file;
    char filename[100],ch;
    long size;

    printf("Enter filename : ");
    scanf("%s",&filename);
    file = fopen(filename,"w");
    if (file == NULL){
        printf("Error \n");
        return 1;
    }

    printf("Press ctrlz to stop\n");
    while ((ch = getchar())!=EOF){
        putc(ch,file);
    }
    fclose(file);

    file = fopen(filename,"r");
    if (file == NULL){
        printf("Error opening\n");
        return 1;
    }

    printf("\nFile Contents \n");
    while ((ch = getc(file)) != EOF){
        putchar(ch);
    }

    fseek(file,0,SEEK_END);
    size=ftell(file);
    printf("\n File sise : %d bytes \n",size);
    fclose(file);
    return 0;
}