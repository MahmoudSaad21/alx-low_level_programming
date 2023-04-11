#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
*strtow - splits a stirng into words
*@str: string to be splitted
*Return: pointer to new string in case of success
*/
char **strtow(char *str)
{
int word_count = 0, i = 0, word_length, j;
char *p, *word_start, *word, **words;
if (str == NULL || *str == '\0')
return (NULL);
for (p = str; *p; p++)
{
if (isspace(*p))
continue;
word_count++;
while (*p && !isspace(*p))
p++;
if (!*p)
break;
}
if (word_count == 0)
return (NULL);
words = (char **)malloc((word_count + 1) * sizeof(char *));
for (p = str; *p; i++)
{
while (*p && isspace(*p))
p++;
if (!*p)
break;
word_start = p;
while (*p && !isspace(*p))
p++;
word_length = p - word_start;
word = (char *)malloc((word_length + 1) * sizeof(char));
if (word == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
strncpy(word, word_start, word_length);
word[word_length] = '\0';
words[i] = word;
}
words[i] = NULL;
return (words);
}
