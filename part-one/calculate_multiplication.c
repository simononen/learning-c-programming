#include <stdio.h>

int multiplication(int x, int y) {
    int result = x * y;
    return result;
}

int main() {
    int multiply = multiplication(5, 4);
    printf("The result of 5 * 4 is: %d.", multiply);
    return 0;
}