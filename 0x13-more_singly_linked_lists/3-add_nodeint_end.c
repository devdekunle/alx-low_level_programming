#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
