#include <stdio.h>

int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    int words = 1, lines = 0;
    while (str[i] != '\0'){
        if (str[i] == '.' || str[i] == '!' || str[i] == '?'){
            lines += 1;
        } else if (str[i] == ' '){
            words += 1;
        }
        i++;
    }
    printf("Words : %d, Lines : %d\n",words,lines);
    return 0;
}