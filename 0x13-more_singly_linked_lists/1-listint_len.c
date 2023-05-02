#include "lists.h"

/**
*listint_len - that returns the number of elements in a linked
*@h: Head of the list
*Return: The number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
