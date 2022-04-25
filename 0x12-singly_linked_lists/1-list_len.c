#include "lists.h"

/**
 * list_len - function to print a list
 * @h: the head of the list
 * Return: the number of nodes
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
