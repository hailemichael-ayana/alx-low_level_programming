#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of the list
 *
 * @head: pointer to a head
 *
 * @index: integer
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
