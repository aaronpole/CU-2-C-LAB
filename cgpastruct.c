#include <stdio.h>
#include <stdlib.h>

struct stud{
    int rollno;
    char name[50];
    char gender[1];
    int cgpa;
} record[50], t;

int main(){
    int N;
    printf("Enter the number of students : ");
    scanf("%d",&N);
    printf("Enter in format (Roll No Name Gender CGPA)\n");
    for (int i = 0; i < N; i++){
        scanf("%d %s %c %d",&record[i].rollno,record[i].name,record[i].gender,&record[i].cgpa);
    }
    

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1-i; j++){
            if (record[j].cgpa<record[j+1].cgpa){
                t = record[j];
                record[j] = record[j+1];
                record[j+1] = t;
            }
        }
    }

    printf("Ranklist\n");
    for (int i = 0; i < N; i++){
        printf("%-8d %-10s %-10s %5d\n",record[i].rollno,record[i].name,record[i].gender,record[i].cgpa);
    }

    printf("\n\n");
    printf("Less Than 7 CGPA\n");
    for (int i = 0; i < N; i++){
        if (record[i].cgpa<7){
            printf("%-8d %-10s %-10s %5d\n",record[i].rollno,record[i].name,record[i].gender,record[i].cgpa);
        }   
    }

    return 0;
}