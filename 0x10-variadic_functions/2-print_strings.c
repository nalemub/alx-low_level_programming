#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints all its parameters with a separator
 *
 * @n: is the number of parameters
 * @separator: is the separator used
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *value;
va_list number_list;

va_start(number_list, n);
for (i = 0; i < n; i++)
{
value = va_arg(number_list, char*);
if (value != NULL)
printf("%s", value);
if (value == NULL)
printf("(nil)");
if (separator == NULL)
{
continue;
}
printf("%s", separator);
}
printf("\n");
}
