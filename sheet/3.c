// Write a C program to print day of week name using switch case.
#include <stdio.h>

int main() {
    char letter;
    printf("enter letter : ");
    scanf("%c",& letter);
    switch(letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel"); break;
        default:
            printf("constant");
    }
}