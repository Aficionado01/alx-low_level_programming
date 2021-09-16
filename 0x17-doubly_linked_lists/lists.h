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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
