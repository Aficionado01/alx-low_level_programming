#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked listint_t list
 * @h: The linked list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = h ? 1 : 0;
	listint_t *p = h ? h->next : NULL;

	if (p)
	{
		while (p)
		{
			num++;
			p = p->next;
		}
	}
	return (num);
}
