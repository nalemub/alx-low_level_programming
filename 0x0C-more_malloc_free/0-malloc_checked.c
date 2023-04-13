#include <stdlib.h>
#include "main.h"

/**
 * Here is a program that checks something
 *
 * malloc_checked is a function that checks for somethings
 *
 * @newmem: spointer to result
 *
 * @b: is the intiger that is being processed
 *
 * @return: It returns void type
*/

void *malloc_checked(unsigned int b)
{
void *newmem = malloc(b);
if (newmem == NULL)
{
exit(98);
}

return (newmem);
}
