#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
