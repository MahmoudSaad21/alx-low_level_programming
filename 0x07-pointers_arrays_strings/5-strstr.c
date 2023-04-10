#include "main.h"
/**
*_strstr - The _strstr() function finds the first occurrence
*of the substring needle in the string haystack.
*The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
if (*needle == 0)
return (haystack);
while (haystack[i] != '\0')
{
j = 0;
if (haystack[i] == needle[j])
do {
if (needle[j + 1] == '\0')
return (haystack + i);
j++;
} while (haystack[i] == needle[j]);
i++;
}
return ('\0');
}
