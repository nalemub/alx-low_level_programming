#include "stddef.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if (array != NULL && size != 0 && action != NULL)
for (i = 0; i < size; i++ )
{
    action(array[i]);
}
}