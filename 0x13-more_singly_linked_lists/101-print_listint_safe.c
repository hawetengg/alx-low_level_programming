#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped linked list
 * @head: pointer to the head of the list to check
 * Return: 0(if the list is not looped)
 * else(the number of unique nodes)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tort == har)
		{
			tort = head;
			while (tort != har)
			{
				nodes++;
				tort = tort->next;
				har = har->next;
			}
			tort = tort->next;
			while (tort != har)
			{
				nodes++;
				tort = tort->next;
			}
			return (nodes);
		}
		tort = tort->next;
		har = (har->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
		return (nodes);
}
