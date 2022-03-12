#include <stdio.h>

int main(void)
{
    int x, y, z;

    x = 255;
    y = 5;
    printf("Given x = %4d, i.e., 0X%04X\n", x, x);
    printf("      y = %4d, i.e., 0X%04X\n", y, y);

    z = x >> y;
    printf("x >> y yields: %6d");


    return 0;
}