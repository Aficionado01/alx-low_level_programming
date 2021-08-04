#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index -  inserts a new node at a idx position.
* @head: double pointer to the first node in the list
* @idx: index of the node to insert
* @n: value for new node
*
* Return: pointer to the indexed node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *prev, *new_elm;

if (head == NULL)
return (NULL);

prev = *head;
for (i = 1; i < idx  && prev; i++)
{
prev = prev->next;
if (prev == NULL)
return (NULL);
}

new_elm = malloc(sizeof(listint_t));
if (new_elm == NULL)
return (NULL);
new_elm->n = n;
if (!idx)
{
new_elm->next = *head;
*head = new_elm;
return (new_elm);
}
new_elm->next = prev->next;
prev->next = new_elm;
return (new_elm);
}
