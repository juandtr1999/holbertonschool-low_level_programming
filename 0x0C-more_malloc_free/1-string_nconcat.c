#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat n bytes from s2 onto s1 in a new memory space
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concat onto s1
 *
 * Return: pointer to new string, NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int c;
	unsigned int d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c = 0; *(s1 + c); c++)
		;
	for (d = 0; *(s2 + d); d++)
		;
	d++;

	if (n > d)
		s = malloc((c + d) * sizeof(*s));
	else
		s = malloc((c + n + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; j < d && j < n; i++, j++)
		*(s + i) = *(s2 + j);
	*(s + i) = '\0';

	return (s);
}
