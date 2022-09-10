#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case, e, q;

	e = 'e';

	q = 'q';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case != e && lower_case != q)
			putchar(lower_case);
	}

	putchar('\n');

	return (0);
}
