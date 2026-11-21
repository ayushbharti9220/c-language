// 4.Take a number n from the user and output its cube (n^3)
#include<stdio.h>
int main() {
    int n, cube;

    printf("Enter Number N for Cube: ");
    scanf("%d", &n);

    cube = n^3;

    printf("Cube is: %d\n", cube);

    return 0;

}
