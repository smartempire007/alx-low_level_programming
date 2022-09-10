#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int num;

	char alpha;



	for (num = '0'; num <= '9'; num++)
	{

		putchar(num);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{

		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
