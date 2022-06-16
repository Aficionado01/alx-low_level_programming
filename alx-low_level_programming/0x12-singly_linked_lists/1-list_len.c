#include "lists.h"

/**
 * list_len - Computes the number of elements in a linked list_t list
 * @h: The linked list
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = h ? 1 : 0;
	list_t *p = h ? h->next : NULL;

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
