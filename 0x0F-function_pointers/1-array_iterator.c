#include "stddef.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array != NULL && size != NULL && action != NULL)
for (int i = 0; i < size; i++ )
{
    action(array[i]);
}
}