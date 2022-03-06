#include <stdio.h>

int main() {

    int num_1, num_2, num_3;

    num_1 = 15;
    num_2 = 150;
    num_3 = 1500;

    printf("The numbers in x format: \n");
    printf("The numbers 15, 150, 1500 in hex format are: 0x%04X, 0x%04X, 0x%04X \n", num_1, num_2, num_3);

    return 0;
}