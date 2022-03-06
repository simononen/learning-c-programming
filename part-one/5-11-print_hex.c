#include <stdio.h>

int main() {

    int num_1, num_2, num_3;

    num_1 = 15;
    num_2 = 150;
    num_3 = 1500;

    printf("The numbers in x format: \n");
    printf("The numbers 15, 150, 1500 in hex format (uppercase) are: %X, %X, %X \n", num_1, num_2, num_3);
    printf("The numbers 15, 150, 1500 in hex format (lowercase) are: %x, %x, %x \n", num_1, num_2, num_3);

    return 0;
}