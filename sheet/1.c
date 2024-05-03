// Write a C program to print day of week name using switch case.
#include <stdio.h>

int main() {
    int numOfDay;
    printf("enter num day : ");
    scanf("%d",& numOfDay);
    switch(numOfDay) {
        case 1:
            printf("saturday");break;
        case 2:
            printf("sunday");break;
        case 3:
            printf("monday");break;
        case 4:
            printf("tuesday");break;
        case 5:
            printf("wednesday");break;
        case 6:
            printf("thursday");break;
        case 7:
            printf("friday");break;
        default:
            printf("num between 1 - 7");
    }
}