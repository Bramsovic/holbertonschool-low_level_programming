#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;
/* Initialize the argument list */
	va_start(args, n);
	for (i = 0; i < n; i++)
{
/* Get the next string argument */
	str = va_arg(args, char *);
/* Print (nil) if the string is NULL */
if (str == NULL)
	printf("(nil)");
else
	printf("%s", str);
/* Print the separator if it's not NULL and not the last argument */
if (separator != NULL && i < n - 1)
	printf("%s", separator);
}
/* End the argument list */
	va_end(args);
/* Print a new line */
	printf("\n");
}
