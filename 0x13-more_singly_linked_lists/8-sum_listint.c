#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
