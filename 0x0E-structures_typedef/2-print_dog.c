#include<stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d)
{
printf("nil");
return (0);
}
printf("Name: %s", (*d).name);
printf("Age: %f", (*d).age);
printf("Owner: %s", (*d).owner);
}
