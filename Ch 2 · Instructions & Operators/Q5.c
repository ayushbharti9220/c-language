#include <stdio.h>

int main () {
    char ch;

    printf("Enter Character: ");
    scanf("%c", &ch);

    // Prints 1 if ch is a digit ('0' to '9'), 0 otherwise
    printf("%d\n", ch >= '0' && ch<= '9');

    return 0;
}