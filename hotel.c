#include <stdio.h>
#include <string.h>

struct hotel {
    char name[50];
    char address[100];
    char grade;
    float average;
    int rooms;
};

void printhotels(struct hotel *a, char grade, int length) {
    struct hotel filtered[length];
    int count = 0;

    // Filter hotels of given grade
    for (int i = 0; i < length; i++) {
        if (a[i].grade == grade) {
            filtered[count++] = a[i];
        }
    }

    // Sort filtered hotels by average room charge (ascending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (filtered[j].average < filtered[j + 1].average) {
                struct hotel temp = filtered[j];
                filtered[j] = filtered[j + 1];
                filtered[j + 1] = temp;
            }
        }
    }

    // Print sorted hotels
    printf("\nHotels of Grade %c sorted by average room charge:\n", grade);
    for (int i = 0; i < count; i++) {
        printf("%s %s %c %.2f %d\n", filtered[i].name, filtered[i].address,
               filtered[i].grade, filtered[i].average, filtered[i].rooms);
    }
}

void printcharges(struct hotel *a, int price, int length){
    for (int i = 0; i < length; i++){
        if (a[i].average < price){
            printf("%s %s %c %.2f %d\n", a[i].name, a[i].address,
               a[i].grade, a[i].average, a[i].rooms);
        }
    }
}

int main() {
    int n;
    printf("Enter number of Hotels : ");
    scanf("%d", &n);
    struct hotel hotels[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name : ");
        scanf(" %[^\n]", hotels[i].name);
        printf("Enter address : ");
        scanf(" %[^\n]", hotels[i].address);
        printf("Enter grade : ");
        scanf(" %c", &hotels[i].grade);
        printf("Enter average charge : ");
        scanf("%f", &hotels[i].average);
        printf("Enter number of rooms : ");
        scanf("%d", &hotels[i].rooms);
    }

    char grade;
    printf("Enter grade to filter : ");
    scanf(" %c", &grade);

    printhotels(hotels, grade, n);

    return 0;
}
