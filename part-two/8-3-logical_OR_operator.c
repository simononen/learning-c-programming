#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always (0) Success
 */
int main(void)
{
    int num;

    printf("Enter a single digit that can be divided\n by both 2 and 3:\n");
    for (num = 1; (num%3) || (num%3 != 0);)
        num = getchar() - '0';
    printf("You got such a number: %d/n", num);
    return (0);
}