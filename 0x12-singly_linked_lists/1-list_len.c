#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to lists list_t
 * Return: nr of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
