#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer to the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	size_t dist;
	const listint_t *ptr = head;
	const listint_t *nxt;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		nodes++;
		ptr = ptr->next;
		nxt = head;
		dist = 0;
		while (dist < nodes)
		{
			if (ptr == nxt)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (nodes);
			}
			nxt = nxt->next;
			dist++;
		}
	}
	return (nodes);
}
