#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a linked list
 * @head: Head of a list
 *
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
