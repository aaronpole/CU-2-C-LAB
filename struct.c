#include <stdio.h>

struct Point {
    int x;
    int y;
};

void printPoint(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    p.x = 100;  // Modification won't affect original
}

int main() {
    struct Point p1 = {10, 20};
    printPoint(p1);
    printf("Original point after function call: (%d, %d)\n", p1.x, p1.y);
    return 0;
}