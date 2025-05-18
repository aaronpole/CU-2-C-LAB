#include <stdio.h>

struct Vehicle{
    char model[50];
    int year;
    float price;
} vehicles[10];

void swap (struct Vehicle *a, struct Vehicle *b){
    struct Vehicle temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    for (int i = 0; i < 10; i++){
        printf("Enter vehicle details (Model Year Price) : ");
        scanf("%s %d %f",vehicles[i].model,&vehicles[i].year,&vehicles[i].price);
    }

    // Bubble sort 
    for (int i = 0; i < 10-1; i++){
        int swapped = 0;
        for (int j = 0; j < 10-i-1; j++){
            if (vehicles[j].price<vehicles[j+1].price){
                swap(&vehicles[j],&vehicles[j+1]);
                swapped = 1;
            }
        }
        if (swapped == 0){
            break;
        }
    }

    printf("Sorted Order\n");
    for (int i = 0; i < 10; i++){
        printf("%s %d %f\n",vehicles[i].model,vehicles[i].year,vehicles[i].price);
    }
    return 0;
}