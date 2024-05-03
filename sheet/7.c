// Write a C program to print day of week name using switch case.
#include <stdio.h>

int main() {
    float num1,num2;
    char ope;
    scanf("%f %f", &num1, &num2);
    scanf("%c", &ope);
    switch(ope) {
        case '+':
            printf("%f",num1 + num2); break;
        case '-':
            printf("%f",num1 - num2); break;
        case '*':
            printf("%f",num1 * num2); break;
        case '/':
            printf("%f",num1 / num2); break;
        default:
            printf("use from this ope : + - * /");
    }
}