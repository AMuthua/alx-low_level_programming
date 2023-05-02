#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 *
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b;
	listint_t *c;

	b = head;
	c = head;
	while (head && b && c->next)
	{
		head = head->next;
		b = b->next->next;

		if (head == b)
		{
			head = c;
			c = b;
			while (1)
			{
				b = c;
				while (b->next != head && b->next != c)
				{
					b = b->next;
				}
				if (b->next == head)
					break;

				head = head->next;
			}
			return (b->next);
		}
	}

	return (NULL);
}
