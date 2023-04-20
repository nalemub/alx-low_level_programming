#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints all its parameters with a separator
 *
 * @n: is the number of parameters
 * @separator: is the separator used
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list number_list;
va_start(number_list, n);
for (i = 0; i < n; i++)
{
printf("%i", va_arg(number_list, int));
if (separator == NULL)
{
continue;
}
printf("%s", separator);
}
printf("\n");
}
