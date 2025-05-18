#include <stdio.h>
void concatString(char *dest, char *src){
    while (*dest != '\0'){
        dest++;
    }
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(){
    char str1[100], str2[100];
    printf("Enter string 1 : ");
    scanf("%s",&str1);
    printf("Enter string 2 : ");
    scanf("%s",&str2);
    concatString(str1,str2);
    printf("String : %s\n",str1);
    return 0;
}