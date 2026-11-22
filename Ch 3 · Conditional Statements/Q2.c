#include<stdio.h>

int main() {
    int marks;
// (90-100 → A+, 70-90 → A, 30-70 → B, <30 → C)
    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 90) {
        printf("A+ \n");
    }

    else if(marks <= 89 && marks >= 70) {
        printf("A");
    }

    else if(marks <= 69 && marks >= 30) {
        printf("B");
    }

    else {
        printf("Fail");
    }

    return 0;

}