#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - prints anything, depending on the format string
*@format: print char, integer, float and string
*/
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i = 0, is_first = 1;
char current;
va_start(args, format);
while (format && format[i])
{
current = format[i];
if (is_first)
is_first = 0;
else
printf(", ");
switch (current)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}
