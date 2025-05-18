#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee{
    int emp_no;
    char name[50];
    char sex;
    float gross_salary;
};

void display_employees(FILE *file){
    struct Employee emp;
    rewind(file);
    printf("Current Employee List:\n");
    printf("Emp No\tName\t\tSex\tGross Salary\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)){
        printf("%d\t%s\t\t%c\t%.2f\n", emp.emp_no, emp.name,emp.sex, emp.gross_salary);
    }
}

int main(){
    FILE *file;
    struct Employee emp;
    file = fopen("employee.dat", "wb");
    if (!file){
        perror("Error opening file");
        return 1;
    }

    struct Employee initial_employees[] = {
        {1, "John", 'M',5000.00},
        {2, "Sarah", 'F',6000.00},
        {3, "Mike", 'M', 4500.00}
    };

    fwrite(initial_employees, sizeof(struct Employee), 3, file);
    fclose(file);

    file = fopen("employee.dat", "rb+");
    display_employees(file);

    struct Employee new_emp = {4, "Alice", 'F', 7000.00};
    fseek(file, 0, SEEK_END);
    fwrite(&new_emp, sizeof(struct Employee), 1, file);
    printf("\nAfter adding new employee:\n");
    display_employees(file);
    
    rewind(file);
    while (fread(&emp, sizeof(struct Employee), 1, file)){
        if (emp.emp_no == 2){
            emp.gross_salary = 0;
            fseek(file, -sizeof(struct Employee), SEEK_CUR);
            fwrite(&emp, sizeof(struct Employee), 1, file);
            break;
        }
    }

    printf("\nAfter removing employee with emp_no 2:\n");
    display_employees(file);

    rewind(file);
    while(fread(&emp, sizeof(struct Employee), 1, file)){
        if (emp.emp_no == 3){
            emp.gross_salary = 8000.00;
            fseek(file, -sizeof(struct Employee), SEEK_CUR);
            fwrite(&emp, sizeof(struct Employee), 1, file);
            break;
        }
    }
    printf("\nAfter updating salary of employee with emp_no 3:\n");
    display_employees(file);
    fclose(file);
    return 0;
}