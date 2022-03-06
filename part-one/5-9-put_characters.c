#include <stdio.h>

int main() {

    char ch1, ch2, ch3;

    ch1 = 'B';
    ch2 = 'y';
    ch3 = 'e';

    printf("Print characters B, y ane e:\n");

    putc(ch1, stdout);
    putc(ch2, stdout);
    putc(ch3, stdout);

    return 0;
}