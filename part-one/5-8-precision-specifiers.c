#include <stdio.h>

int main() {

    int int_num1;
    double flt_num1;

    int_num1 = 123;
    flt_num1 = 123.456789;

    printf("Default Integer format: %d\n", int_num1);
    printf("With precision specifier: %2.8d\n", int_num1);
    printf("Default Float format: %d\n", flt_num1);
    printf("With precision specifier: %-10.2d\n", flt_num1);

    return 0;
}