#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;

    return (len);
}

/**
 * mul - multiplies two numbers stored as strings
 * @s1: the first number
 * @s2: the second number
 *
 * Return: a pointer to a string containing the product
 */
char *mul(char *s1, char *s2)
{
    int len1, len2, i, j, k, n, carry;
    char *result;

    len1 = _strlen(s1);
    len2 = _strlen(s2);
    result = calloc(len1 + len2 + 1, sizeof(char));

    if (result == NULL)
        return (NULL);

    for (i = len1 - 1; i >= 0; i--)
    {
        if (!_isdigit(s1[i]))
        {
            free(result);
            return (NULL);
        }

        n = s1[i] - '0';
        carry = 0;

        for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
        {
            if (!_isdigit(s2[j]))
            {
                free(result);
                return (NULL);
            }

            carry += (s2[j] - '0') * n + result[k];
            result[k] = carry % 10;
            carry /= 10;
        }

        result[k] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] += '0';

    i = 0;
    while (result[i] == '0' && result[i + 1])
        i++;

    return (result + i);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    char *s1, *s2, *res;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    s1 = argv[1];
    s2 = argv[2];

    while (*s1 == '0' && *(s1 + 1))
        s1++;

    while (*s2 == '0' && *(s2 + 1))
        s2++;

    res = mul(s1, s2);

    if (res == NULL)
    {
        printf("Error\n");
        return (98);
    }

    printf("%s\n", res);
    free(res);
    return (0);
}
