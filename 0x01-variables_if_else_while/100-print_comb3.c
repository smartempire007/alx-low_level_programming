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


	int num1, num2;


	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			if (num2 != num1)
			{
				putchar(num1);

				putchar(num2);

				if (num1 == '8' && num2 == '9')
				{
					continue;
				}

				putchar(',');

				putchar(' ');

			}
		}
	}

			

	putchar('\n');
	return (0);

}
