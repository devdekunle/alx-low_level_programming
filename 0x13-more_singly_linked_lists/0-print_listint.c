#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: count.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;


	}
	return (count);


}
