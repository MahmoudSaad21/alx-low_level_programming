#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
int len = len(s);
if (*s == '\0')
return (1);
else
return (is_palindrome_help(s, len, 0));
}
/**
*len - Returns the length of a string.
*@s: The string to be measured.
*Return: The length of the string.
*/
int len(char *s)
{
int l = 0;
if (*(s + l) != '\0')
{
l++;
l = l + len(s + l);
}
return (l);
}
/**
*is_palindrome_help - Checks if a string is a palindrome.
*@s: The string to be checked.
*@len: The length of s.
*@i: The index of the string to be checked.
*Return: If the string is a palindrome or not.
*/
int is_palindrome_help(char *s, int len, int i)
{
if (i == len / 2)
return (1);
else if (s[i] == s[len - i - 1])
return (is_palindrome_help(s, len, i + 1));
return (0);
}
