#include <stdlib.h> 
#include "main.h"
/**
 * a function that takes min and max, and lists all numbers between
 *
 * @newmem: some pointer
 *
 * @rangenum: some variable
 *
 * return: void
*/

int *array_range(int min, int max)
{
int i;
void* newmem;
int *rangenum;
if (min > max)
{
return NULL;
}
newmem = malloc((max-min)+1);
rangenum = newmem;
for (i = 0; i < (max-min); i++)
{
rangenum[i] = (min+i);
}

return (newmem);
}