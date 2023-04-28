#include <stdio.h>
#include "lists.h"
/**
*list_len - finds the number of elements in a linked list
*@h: pointer to the list
*Return: the number of elements
*/
size_t list_len(const list_t *h){
size_t c = 0;
const list_t *temp = h;
while (temp != NULL)
{
c++;
temp = temp->next;
}
return (c);
}
