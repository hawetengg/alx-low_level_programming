#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: a pointer that holds the address of the head pointer
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
