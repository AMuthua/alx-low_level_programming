#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * if a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element. NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (*head);
}
