#include<stdio.h>
#include "dog.h"

/**
 * nre_dog - code start
 * @name:
 * @age:
 * @owner:
 * @tempdog:
 * 
 * Return - a dog_t structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *tempdog;
(*tempdog).owner = owner;
(*tempdog).age = age;
(*tempdog).name = name;

return (tempdog);
}