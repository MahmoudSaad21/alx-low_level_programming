#include "main.h"
/**
*print_name - function that prints a name.
*@name: name
*@f: function
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
