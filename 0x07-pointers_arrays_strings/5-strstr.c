#include "main.h"



/**
 * _strstr - finds the first occurrence of the substring.
 *
 * needle in the string haystack.
 *
 * @haystack: entire string.
 *
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring or
 *
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	char *ptrr;

	while (*haystack != '\0')
	{
		ptr = haystack;

		ptrr = needle;

		while (*haystack != '\0' && *ptrr != '\0' && *haystack == *ptrr)
		{
			haystack++;
			ptrr++;
		}
		if (!*ptrr)

			return (ptr);

		haystack = ptr + 1;
	}
	return (0);
}
