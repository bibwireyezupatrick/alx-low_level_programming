#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint-prints all elements of a list
 * @h-a linked list
 *
 * Return-number of nodes
 */


size_t print_listint(const listint_t *h);
{
	size_t count =0;

	while(h!=NULL)
	{
		if(h->str==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len,h->str);

		h=h->next;
		count++;
	}

	return (count);
}
