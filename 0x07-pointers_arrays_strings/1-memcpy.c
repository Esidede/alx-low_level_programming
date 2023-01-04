#include "main.h"
/**
 * _memcpy - function to copy a string
 * @dest: starting address of memory to be filled
 * @src: the desired value
 * @n: number of bytes to be changed
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
