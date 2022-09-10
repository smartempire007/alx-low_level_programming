#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{


	int num1, num2, num3;


	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; mun2++)
		{

			for (num3 = num2 + 1; num3 <= '9'; mun3++)
			{
				if (num2 != num1)
				{
					putchar(num1);

					putchar(num2);

					putchar(num3)

					if (num1 == '7' && num2 == '8')
					{
						continue
					}

					putchar(',');

					putchar(' ');

				}

					
 
			}
		}
	}

			

	putchar('\n');
	return (0);

}
