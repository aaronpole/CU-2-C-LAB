#include <stdio.h>

int isPalindome (char str[]){
    int length = 0;
    while(str[length]!='\0'){
        length++;
    }
    for (int i = 0; i < length; i++){
        if (str[i] != str[length-i-1]){
            return 0;
        };
    }
    return 1;
}

int main(){
    char str[100];
    printf ("Enter string : ");
    scanf("%s",&str);
    int result = isPalindome(str);
    if (result == 1){
        printf("Palindrome\n");
    }
}