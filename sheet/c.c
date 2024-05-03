#include <stdio.h>
#include <stdbool.h>

int main(void) {
    float num1,num2;
    int x;
    char op;
    do {
        printf("continue (1/0) :");
        scanf("%d",&x);
        if(x == 1) {
            printf("enter ope : ");
            scanf("%s",&op);
            printf("enter your num1 :");
            scanf("%f",& num1);
            printf("enter your num2 :");
            scanf("%f",& num2);
            switch (op) {
                case '+':
                    printf("%f", num1 + num2);
                    break;
                case '-':
                    printf("%f", num1 - num2);
                    break;
                case '*':
                    printf("%f", num1 * num2);
                    break;
                case '/':
                    printf("%f", num1 / num2);
                    break;
                default:
                    printf("enter your + , - , *, /");
                }
            }
        else {
            break;
        }
    }
    while(true);
}