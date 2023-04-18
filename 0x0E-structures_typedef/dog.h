#ifndef DOG_H
#define DOG_H
/**
*struct dog - a new type of data representing a dog
*@name: name
*@age: age
*@owner: the owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
