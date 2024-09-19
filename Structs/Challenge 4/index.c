#include <stdio.h>

// Define a struct for a Point
struct Point {
    int x;
    int y;
};

// Function to update the Point using a pointer
void updatePoint(struct Point *p, int newX, int newY) {
    p -> x = newX;  // Update x value
    p -> y = newY;  // Update y value
}

int main() {
    struct Point p1; // Declare a Point
    p1.x = 10;       // Initialize x
    p1.y = 20;       // Initialize y

    printf("Avant la MAJ: (%d, %d)\n", p1.x, p1.y);

    // Update the Point using a pointer
    updatePoint(&p1, 30, 40);

    printf("Apres la MAJ: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
