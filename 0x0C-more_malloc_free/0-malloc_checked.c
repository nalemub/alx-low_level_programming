#include <stdlib.h> 

/**
 * a function that does stuff
 * 
 * @newmem: some pointer
 * 
 * return: void
*/

void *malloc_checked(unsigned int b)
{
void* newmem = malloc(b);
if (newmem == NULL)
{
exit(98);
}

return (newmem);
}
