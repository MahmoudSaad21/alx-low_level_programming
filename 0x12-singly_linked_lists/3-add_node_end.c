#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - Add a new node at the end of a list_t list.
*@head: A pointer to the head of the list.
*@str: The string to be added to the list.
*Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
ew_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current_node = *head;
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
return (new_node);
}