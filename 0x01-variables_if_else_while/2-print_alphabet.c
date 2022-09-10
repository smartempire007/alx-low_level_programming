#include <stdlio.h>
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

	char lower_case;



	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{

		putchar(lower_case);

	}

	putchar('\n');


	return (0);
}
