#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vprint;
	
	va_start(vprint, n);
	
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(vprint, int));
	}

	va_end(vprint);
	putchar(10);
}
