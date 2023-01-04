#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r, i;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[r] == accept[i])
			{
				n++;
				break;
			}
			if (accept[i + 1] == '\0' && s[r] != accept[i])
			{
				return (n);
			}
		}
	}
	return (n);
}
