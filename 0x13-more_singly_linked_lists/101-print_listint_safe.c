#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listp(listp_t **head)
{
	listp_t *x;
	listp_t *y;

	if (head != NULL)
	{
		y = *head;
		while ((x = y) != NULL)
		{
			y = y->next;
			free(x);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *a, *b, *c;

	a = NULL;
	while (head != NULL)
	{
		b = malloc(sizeof(listp_t));

		if (b == NULL)
			exit(98);

		b->p = (void *)head;
		b->next = a;
		a = b;

		c = a;

		while (c->next != NULL)
		{
			c = c->next;
			if (head == c->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&a);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&a);
	return (nnodes);
}
