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
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->str, h->len);
h = h->next;
c++;
}
return (c);
}
