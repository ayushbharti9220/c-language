#include<stdio.h>
int main() {
    
    //area of circle is 3.14*radius*radius

float radius, area;

    printf("Enter Radius here: ");
    scanf("%f", &radius);

    area = radius*radius*3.14 ; 

    printf("%.2f", area);

    return 0;
}