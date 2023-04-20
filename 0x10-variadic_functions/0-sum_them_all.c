#include <stdarg.h>
/**
 * sum_them_all - a function that adds all the parameters that are passed to it
 *
 * @n: is the count of arguments
 *
 * Return: - the sum of all the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int total;
va_list number_list;

total = 0;
if (n == 0)
{
return (0);
}
va_start(number_list, n);
for (i = 0; i < n; i++)
{
total = total + va_arg(number_list, int);
}

return (total);
}
