#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - Print numbers using a separator
*@separator: The string separator
*@n: The quantity of numbers
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
char *ptr;
va_start(arg, n);
for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
ptr = va_arg(arg, char *);
printf("%s", (ptr == NULL) ? "(nil)" : ptr);
}
printf("\n");
va_end(arg);
}
