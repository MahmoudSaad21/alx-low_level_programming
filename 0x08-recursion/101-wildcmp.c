#include "main.h"
/**
*wildcmp - compares two strings and returns 1 if identical 0 if not
*@s1: string to be checked
*@s2: pattern to be used
*Return: returns 1 if identical 0 if not
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s2 == '*' || *s1 == '*')
return (wildcmp(s1, s2+1) || (*s1 != '\0' && wildcmp(s1+1, s2)));
if (*s1 == *s2)
return (wildcmp(s1+1, s2+1));
return (0);
}
