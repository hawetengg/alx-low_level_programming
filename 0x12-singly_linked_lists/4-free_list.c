#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
