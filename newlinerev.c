#include <stdio.h>
#include <string.h>

void reverse(char *a){
    int len = strlen(a);
    for (int i = 0; i < len/2; i++){
        char temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
}

int main(){
    char str[80];

    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);

    int i = 0; 
    while (str[i] != '\0'){
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverse(str);

    printf("Reversed String : %s",str);
    return 0;
}