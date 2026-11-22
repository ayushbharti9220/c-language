#include<stdio.h>

int main() {

    int a, b, c, sum;
    float average;

    printf("Enter Number A, B, and C: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;
    average = sum/3;

    printf("Average is : %.2f \n", average);

    return 0;
}