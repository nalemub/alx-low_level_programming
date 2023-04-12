#include <stdlib.h> 

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
if (nmemb == 0 || size == 0)
{
return (NULL);
}
void* newmem = malloc(nmemb * size);
if (newmem == NULL) {
return (NULL);
}
char* p = newmem;
for (unsigned int i = 0; i < nmemb * size; ++i) {
*(p + i) = 0;
}

return (newmem);
}
