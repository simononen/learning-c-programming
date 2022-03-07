#include <stdio.h>

int main() {

    int w, x, y, z, result;

    w = x = y = z = 1;
    printf("Given w = %d, x = %d, y = %d and z = %d \n", w, x, y, z);

    result = ++w;
    printf("++w evaluates to %d and w is now %d \n", result, w);

    result = x++;
    printf("x++ evaluates to %d and x is now %d \n", result, x);

    result = --y;
    printf("--y evaluates to %d y is now %d \n", result, y);

    result = y--;
    printf("y-- evaluates to %d y is now %d \n", result, y);

    return 0;
}