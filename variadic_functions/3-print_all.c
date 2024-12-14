#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: c = char, i = integer, f = float, s = string.
 * If the string is NULL, (nil) is printed.
 * Any other character is ignored.
 */
void print_all(const char * const format, ...)
{
va_list arguments;
unsigned int format_index = 0;
char *separator_string = "";
char *string_argument;
va_start(arguments, format);
while (format && format[format_index])
{
if (format[format_index] == 'c')
{
printf("%s%c", separator_string, va_arg(arguments, int));
separator_string = ", ";
}
else if (format[format_index] == 'i')
{
printf("%s%d", separator_string, va_arg(arguments, int));
separator_string = ", ";
}
else if (format[format_index] == 'f')
{
printf("%s%f", separator_string, va_arg(arguments, double));
separator_string = ", ";
}
else if (format[format_index] == 's')
{
string_argument = va_arg(arguments, char *);
if (!string_argument)
string_argument = "(nil)";
printf("%s%s", separator_string, string_argument);
separator_string = ", ";
}
format_index++;
}
va_end(arguments);
printf("\n");
}
