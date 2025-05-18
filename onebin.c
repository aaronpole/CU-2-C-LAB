 #include <stdio.h>

int count_ones(int num){
    int count = 0;
    while (num){
        count+=num&1;
        num>>=1;
    }
    return count;
}

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Ones : %d\n",count_ones(n));
    return 0;
}