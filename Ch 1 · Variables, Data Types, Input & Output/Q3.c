#include<stdio.h>

int main() {

    // perimeter of rectangle is 2*(l+b)

    int length, breadth, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);


    perimeter = 2 * (length + breadth);

    printf("Perimeter of Rectangle is: %d\n", perimeter);

    return 0;

}