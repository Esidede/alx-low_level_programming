#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated memory which
 * has s1, s2 and null byte.
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while  (*(s2 + j))
		len2++, j++;
	len2++;
	nstr = malloc(sizeof(char) * (len1 + len2));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		*(nstr + i) = *(s1 + i);
	}
	for (j = 0; j < len2; j++)
	{
		*(nstr + i) = *(s2 + j);
		i++;
	}
	return (nstr);
}

