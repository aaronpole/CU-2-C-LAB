#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp1 = fopen("aaron.txt","r");
    FILE *fp2 = fopen("temp.txt","w");
    if (fp1 == NULL || fp2 == NULL){
        printf("Error opening file\n");
        exit(0);
    }
    int ch;
    while((ch=getc(fp1))!=EOF){
        if (ch=='a' || ch=='e'){
            fputc('x',fp2);
        }
        else{
            fputc(ch,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("aaron.txt");
    rename("temp.txt","aaron.txt");

    FILE *fp3 = fopen("aaron.txt","r");
    if (fp3==NULL){
        printf("Invalid File\n");
        exit(0);
    }
    int ch1;
    while((ch1=getc(fp3))!=EOF){
        putchar(ch1);
    }
    return 0;
}