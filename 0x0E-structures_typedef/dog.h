#ifndef DOG_H
#define DOG_H



/**
 *  dog - is a structure defining the name, age gender and owner of a dog
 * @struct: defines a structure
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
