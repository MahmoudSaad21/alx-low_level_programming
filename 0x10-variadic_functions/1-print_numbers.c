#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - prints numbers & new line at the end
*@separator:string
*@n:number of elements
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(arg);
}
