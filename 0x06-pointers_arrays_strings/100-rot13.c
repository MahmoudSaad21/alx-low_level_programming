#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @str: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *str)
{
char *result = (char *)malloc(strlen(str) + 1);
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            result[i] = (((str[i] - 'a') + 13) % 26) + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = (((str[i] - 'A') + 13) % 26) + 'A';
        } else { 
	    result[i] = str[i];
        }
    }
    result[i] = '\0';
    return (result);
}
