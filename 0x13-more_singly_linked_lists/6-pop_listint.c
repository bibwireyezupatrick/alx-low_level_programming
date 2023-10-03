#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}
