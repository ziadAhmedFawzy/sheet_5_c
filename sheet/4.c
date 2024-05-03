// Write a C program to print day of week name using switch case.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1;
    int num2;
    printf("enter num1, num2 : ");
    scanf("%d %*c %d", &num1, &num2);
    bool result = num1 > num2;
    switch(result) {
        case 1:
            printf("num1 bigger than num2"); break;
        default:
            printf("num2 bigger than num1");
    }
}