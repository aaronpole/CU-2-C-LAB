#include <stdio.h>
#include <stdlib.h>

int main() {
    // Person 1 - Read only
    FILE *person1 = fopen("sample.txt", "r");
    if (person1 == NULL) {
        perror("Person 1: Error opening file for reading");
        exit(1);
    }

    printf("Person 1 is reading the file:\n");
    char ch;
    while ((ch = fgetc(person1)) != EOF) {
        putchar(ch);
    }
    fclose(person1);

    // Person 2 - Read and Write
    FILE *person2 = fopen("sample.txt", "r+");  // "r+" = read & write without truncating
    if (person2 == NULL) {
        perror("Person 2: Error opening file for reading and writing");
        exit(1);
    }

    // Writing to the file
    fseek(person2, 0, SEEK_END); // Move to the end to append
    fprintf(person2, "\nPerson 2 added this line.");

    // Reading from the beginning
    rewind(person2);
    printf("\n\nPerson 2 is reading the file after writing:\n");
    while ((ch = fgetc(person2)) != EOF) {
        putchar(ch);
    }

    fclose(person2);
    return 0;
}
