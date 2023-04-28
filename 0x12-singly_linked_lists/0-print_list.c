#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list
*@h: pointer to head of the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
printf("[%d] ", h->len);
if (h->str == NULL)
printf("(nil)\n");
else
printf("%s\n", h->str);
h = h->next;
c++;
}
return (c);
}
