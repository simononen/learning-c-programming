#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 
 * 
 * Return: Always (0) Success
 */

int main(void)
{
    int num;

    num = 0;
    printf("The AND operator yields: %d\n", (num%2 == 0) && (num%3 == 0));

    num = 2;
    printf("The AND operator yields: %d\n", (num%2 == 0) && (num%3 == 0));

    num = 3;
    printf("The AND operator yields: %d\n", (num%2 == 0) && (num%3 == 0));

    num = 6;
    printf("The AND operator yields: %d\n", (num%2 == 0) && (num%3 == 0));
    return (0);
}
 