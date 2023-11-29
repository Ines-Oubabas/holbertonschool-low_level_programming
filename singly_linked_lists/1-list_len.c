#include <stdio.h>
#include "lists.h"
/**
* list_len -  function that returns the number of elements in a linked
* @h: pointer to the head of the linked list
* Return: number of elements in the linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
