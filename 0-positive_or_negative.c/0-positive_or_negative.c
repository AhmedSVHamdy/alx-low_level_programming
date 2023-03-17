#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *
 * main - Determines if a number is positive. negative or Zero.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
        {
        printf("%n is positive\n");
        }
        else if (n == 0)
        {
        printf("%n is Zero\n");
        }
        else
        {
        printf("%n is negative\n");
        }

         return (0);
}

