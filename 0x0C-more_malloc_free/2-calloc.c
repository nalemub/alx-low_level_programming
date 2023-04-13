#include <stdlib.h> 
#include "main.h"
/**
 * a function that allocates a dynamic memory
 * 
 * @newmem: some pointer
 * 
 * @p: some variable for a string
 * 
 * return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *newmem;
unsigned int i;
char* p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
newmem = malloc(nmemb * size);
if (newmem == NULL) {
return (NULL);
}
p = newmem;
for (i = 0; i < nmemb * size; ++i) {
*(p + i) = 0;
}

return (newmem);
}
