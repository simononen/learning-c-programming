#include <stdio.h>

int main() {
    
    char chr;

    printf("Enter any character: \n");
    chr = getchar();

    printf("The character you entered is: \n");
    putchar(chr);

    printf("\n");
    return 0;
}