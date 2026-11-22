#include<stdio.h>

int main() {
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks < 30) {
        printf("Student is Fail");
    }
    
    else {
        printf("Student Is Pass");
    
    }

    return 0;

}