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
int *rangenum;
if (min > max)
{
return NULL;
}
rangenum = (int*) malloc((max-min)+1);
for (i = 0; i < (max-min); i++)
{
rangenum[i] = (min+i);
}

return (rangenum);
}