#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list
 *
 * Return: Head of nodes data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *i;

	if (*head == NULL)
		return (0);

	i = *head;

	hnode = i->n;

	h = i->next;

	free(i);

	*head = h;

	return (hnode);
}
