// Write a C program to print day of week name using switch case.
#include <stdio.h>

int main() {
    int num;
    printf("enter num : ");
    scanf("%d", &num);
    int process = num % 2;
    switch(process) {
        case 0:
            printf("even"); break;
        default:
            printf("odd");
    }
}