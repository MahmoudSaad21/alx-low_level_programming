#include "lists.h"
/**
*reverse_listint - reverses a listint_t linked list.
*@head: pointer to pointer to the first element of the list
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL, *current = *head, *next;
while (current != NULL)
{
next = current->next;
current->next = previous;
previous = current;
current = next;
}
*head = previous;
return (*head);
}
