#ifndef ALX_LISTS_H
#define ALX_LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - Represents a doubly linked list
 * @n: The data stored in a node
 * @prev: The pointer to the previous node
 * @next: The pointer to the next node
 *
 * Description: A doubly linked list node structure
 */
typedef struct dlistint_s
{
	/* The data stored in a node */
	int n;
	/* The pointer to the previous node */
	struct dlistint_s *prev;
	/* The pointer to the next node */
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
