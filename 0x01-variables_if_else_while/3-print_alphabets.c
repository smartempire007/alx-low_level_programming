#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char lower_upper;



	for (lower_upper = 'a'; lower_upper <= 'z'; lower_upper++)
	{

		putchar(lower_upper);
	}

	for (lower_upper = 'A'; lower_upper <= 'Z'; lower_upper++)
	{

		putchar(lower_upper);

	}

	putchar('\n');


	return (0);
}
