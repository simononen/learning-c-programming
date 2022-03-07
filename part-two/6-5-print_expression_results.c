#include <stdio.h>

int main() {

    int x, y;

    x = 1;
    y = 3;

    x += y;
    printf("x += y evaluates to %d \n", x);

    x = 1;
    y = 3;

    x += -y;
    printf("x += -y evaluates to %d \n", x);

    x = 1;
    y = 3;

    x -= y;
    printf("x -= y evaluates to %d \n", x);

    x = 1;
    y = 3;

    x -= -y;
    printf("x -= -y evaluates to %d \n", x);

    x = 1;
    y = 3;

    x *= y;
    printf("x *= y evaluates to %d \n", x);

    x = 1;
    y = 3;

    x *= -y;
    printf("x *= -y evaluates to %d \n", x);

    return 0;
}