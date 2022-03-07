#include <stdio.h>

int main() {

    int i = 0;
    
    while(i <= 3) {
        int j = 1;
        printf("The start of iteration %d of the outer loop \n", i);
        do {
            printf("     Iteration %d of the inner loop. \n ", j);
            j++;
        } while(j <= 4);
        printf("The end of the iteration %d of the outer loop \n", i);
        i++;
    }

    return 0;
}