#include <stdio.h>

int main() {

    int x = 1, y = 3;

    printf("The Results of the expressions: \n");
    printf("x += y evaluates to %d \n", x += y);
    printf("x += -y evaluates to %d \n", x += -y);
    printf("x -= y evaluates to %d \n", x -= y);
    printf("x -= -y evaluates to %d \n", x -= -y);
    printf("x *= y evaluates to %d \n", x *= y);
    printf("x *= -y evaluates to %d \n", x *= -y);

    return 0;
}