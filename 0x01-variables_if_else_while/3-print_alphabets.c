#include <stdlib.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

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
