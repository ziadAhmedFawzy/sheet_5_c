// Write a C program to print day of week name using switch case.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    scanf("%d",&num);
    bool status = num > 0, status2 = num < 0, status3 = num == 0;
    switch(status) {
        case 1 :
            printf("postive");break;
    }
    switch(status2) {
        case 1 :
            printf("negative");break;
    }
    switch(status3) {
        case 1 :
            printf("zero");break;
    }
}