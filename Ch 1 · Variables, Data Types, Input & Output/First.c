#include<stdio.h>
int main() {
    int a,b,area;

    // area of square is side*side = a*b

    printf("Enter Side A: ");
    scanf("%d", &a);

    printf("Enter Side B: ");
    scanf("%d", &b);

    area = a*b ; 
 
    printf("Area is %d", area);

    return 0;
}