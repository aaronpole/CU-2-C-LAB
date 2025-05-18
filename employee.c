#include <stdio.h>

int main(){
    int empid; 
    float salary;
    char status;
    char name[50];

    printf("Enter your EMPID : ");
    scanf("%d",&empid);

    printf("Enter your name : ");
    scanf("%s",name);

    printf("Enter current status (F/P) : ");
    scanf(" %c",&status);

    printf("Enter basic pay : ");
    scanf("%f",&salary);

    float hra, da;
    if (status=='F' || status=='f'){
        hra = 0.1*salary;
        da = 0.75*salary;
        salary = salary+da+hra;
    }

    printf("Employee Details\n");
    printf("Employee ID : %d\nEmployee Name : %s\nEmployee Status : %c\nEmployee Salary : %.2f\n",empid,name,status,salary);
    return 0;
}