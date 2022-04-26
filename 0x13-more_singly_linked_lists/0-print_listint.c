#include "lists.h"

/**
 * print_listint - function to print a list
 * @h: the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
