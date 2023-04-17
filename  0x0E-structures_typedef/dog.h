#ifndef DOG_H
#define DOG_H



/**
 *  dog - is a structure defining the name, age gender and owner of a dog
 * @struct: defines a structure
*/
typedef struct
{
char *name;
float age;
char *owner;
} dog;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(dog *d);

#endif /* DOG_H */
