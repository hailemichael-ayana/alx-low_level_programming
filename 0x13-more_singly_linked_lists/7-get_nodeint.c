#include "lists.h"
i
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
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
