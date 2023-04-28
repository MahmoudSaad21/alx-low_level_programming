#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*free_list - Frees a linked list
*@head: Pointer to the head node of the list
*Return: nothing
*/
void free_list(list_t *head)
{
list_t *current_node;
while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node->str);
free(current_node);
}
}
