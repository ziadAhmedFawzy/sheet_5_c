// Write a C program to print day of week name using switch case.
#include <stdio.h>

int main() {
    int numOfMonth;
    printf("enter num month : ");
    scanf("%d",& numOfMonth);
    switch(numOfMonth) {
        case 9:
        case 4:
        case 6:
        case 11:
            printf("30 day");break;
        case 2:
            printf("28 or 29 day");break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");break;
        default:
            printf("num between 1 to 12");
    }
}