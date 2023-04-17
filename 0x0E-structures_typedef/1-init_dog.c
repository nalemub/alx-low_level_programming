#include "dog.h"

/**
 * init_dog - intial part
 * @name: is name of the pet in char array
 * @d: the data structure
 * @age: float
 * @owner: char array
 *
 * Return - nothing
*/
void init_dog(dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;

return (0);
}
