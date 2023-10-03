#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len-prints the number of elements of the list
 * @h: a pointer to the linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		len++;
		h = h->next;
	}

	return (len);
}


