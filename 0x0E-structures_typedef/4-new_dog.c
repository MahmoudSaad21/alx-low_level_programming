#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
*new_dog - creates a new dog
*@name: the name of the dog
*@age: the age of the dog
*@owner: the name of the dog's owner
*Return: a pointer to the new dog_t structure, or NULL if allocation fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
