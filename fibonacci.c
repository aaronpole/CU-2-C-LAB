#include <stdio.h>
int main(){
    int first = 0, second = 1, next;
    printf("%d %d ",first,second);
    for (int i = 0; i<8; i++){
        next = first + second;
        printf("%d ",next);
        first = second;
        second = next;
      }
    return 0;
}