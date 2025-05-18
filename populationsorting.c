#include <stdio.h>
#include <string.h>

// Create struct for data
struct city{
    char name[50];
    float literacy;
    int population;
};

// Function to swap values
void swap(struct city *a, struct city *b){
    struct city temp = *a;
    *a = *b;
    *b = temp;
}

// Program to check and implement swap
int main(){
    int n;
    printf("Enter number of cities : ");
    scanf("%d",&n);
    struct city cities[n];

    for (int i = 0; i < n; i++){
        printf("Enter name, literacy rate, population [name literacy population] : ");
        scanf("%s %f %d",cities[i].name,&cities[i].literacy,&cities[i].population);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 -i; j++){
            int cmp = strcmp(cities[j].name,cities[j+1].name);
            if (cmp>0){
                swap(&cities[j],&cities[j+1]);
            } else if (cmp == 0){
                if (cities[j].literacy<cities[j+1].literacy){
                    swap(&cities[j],&cities[j+1]);
                } else if (cities[j].literacy == cities[j+1].literacy){
                    if (cities[j].population<cities[j+1].population){
                        swap(&cities[j],&cities[j+1]);
                    }
                }
            }
        }
    }

    printf("Sorted Cities\n");
    for (int i = 0; i < n; i++){
        printf("%s %.2f %d\n",cities[i].name,cities[i].literacy,cities[i].population);
    }

    return 0;
}