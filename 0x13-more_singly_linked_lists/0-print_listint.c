#include "lists.h"
#include <stdio.h>

/**
 * print_listint - it prints all elements
 * @h: A pointer of the head
 * Return: The number of nodes in thr list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
