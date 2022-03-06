#include <stdio.h>

int main() {
    
    char chr;

    printf("Enter any character: \n");
    chr = getc( stdin );

    printf("The character you entered is: \n");
    putc(chr, stdout);

    printf("\n");
    return 0;
}