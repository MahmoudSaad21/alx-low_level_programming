#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*Return: pointer to new string in case of success
*/
char *argstostr(int ac, char **av) {
int total_length = 0, i, position = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
total_length = total_length + strlen(av[i]) + 1;
result = malloc(total_length * sizeof(char));
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++) {
strcpy(result + position, av[i]);
position = position + strlen(av[i]);
*(result + position++) = '\n';
}
*(result + position) = '\0';
return (result);
}
