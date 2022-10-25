#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 *
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (nodes);
	while (*h)
	{
		nodes++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (nodes);
}
