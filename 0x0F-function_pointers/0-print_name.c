#include "function_pointers.h"
#include <stddef.h>
/**
*print_name - function that prints a name.
*@name: name
*@f: function
*Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
f(name);
else
return;
}
