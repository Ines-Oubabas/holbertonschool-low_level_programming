#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* free_list - Frees a list_t list
* @head: Pointer to the head of the list
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
