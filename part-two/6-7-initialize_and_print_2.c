#include <stdio.h>

int main() {

    int x = 1;

    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);

    return 0;
}