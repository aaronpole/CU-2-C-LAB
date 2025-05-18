#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int comparedates(struct date *a, struct date *b){
    if (a->year != b->year){
        if (a->year - b->year < 0) return 1;
        else if (a->year - b->year > 0) return 0;
    } else if (a->year == b->year){
        if (a->month != b->month){
            if (a->month - b->month < 0) return 1;
            else if (a->month - b->month > 0) return 0;
        }else if (a->month == b->month){
            if (a->day != b->day){
                if (a->day - b->day < 0) return 1;
                else if (a->day - b->day > 0) return 0;
            } else if (a->day == b->day) return 2;
        } 
    }
}

int main(){
    struct date a; 
    struct date b;
    printf("Enter first date [dd-mm-yyyy] : ");
    scanf("%d-%d-%d",&a.day,&a.month,&a.year);
    printf("Enter second date [dd-mm-yyyy] : ");
    scanf("%d-%d-%d",&b.day,&b.month,&b.year);
    int result = comparedates(&a,&b);
    if (result==1){
        printf("Date 1 is ealier\n");
    }
    else if (result==0){
        printf("Date 2 is ealier\n");
    }
    else if (result==2){
        printf("Dates are same\n");
    }
    return 0;
}