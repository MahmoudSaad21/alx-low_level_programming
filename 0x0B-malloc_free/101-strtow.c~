#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*Return: pointer to new string in case of success
*/
char *argstostr(int ac, char **av)
{
int total_length = 0, i, position = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
total_length = total_length + strlen(av[i]) + 1;
result = malloc(total_length *sizeof(char) + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
strcpy(result + position, av[i]);
position = position + strlen(av[i]);
*(result + position++) = '\n';
}
*(result + position) = '\0';
return (result);
}
