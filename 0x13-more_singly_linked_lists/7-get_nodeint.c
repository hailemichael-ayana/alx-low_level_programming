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
	unsigned int i = 0;
	listint_t *temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
return (temp ? temp : NULL);
}
