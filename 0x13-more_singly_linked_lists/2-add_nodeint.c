#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: A pointer to the address of the head in the list
 * @n: The integer for the new node
 * Return: address of the new element, else(NULL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
