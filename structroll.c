#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;

    struct stud{
        int adno;
        char name[50];
    }s[100],t;

    printf("Enter number of students : ");
    scanf("%d",&N);

    printf("Enter details of %d students (Admission Number Name )\n",N);
    for (int i = 0; i < N; i++){
        scanf("%d %s",&s[i].adno,s[i].name);
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1-i; j++){
            if (strcmp(s[j].name,s[j+1].name)>0){
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }

    printf("Name                  Admission Number\n");
    for (int i = 0; i < N; i++){
        printf("%-20s %5d\n",s[i].name,s[i].adno);
    }
    
}