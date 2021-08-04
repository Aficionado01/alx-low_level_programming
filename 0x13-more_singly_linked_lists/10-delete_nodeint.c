include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index index
* of a listint_t linked list.
* @head: double pointer to the first node in the list
* @index: index of the node to delete
*
* Return: pointer to the indexed node
*/
int delete_nodeint_at_index(listint_t**head, unsigned int index)
{
unsigned int i;
listint_t *prev, *elm;

if (head == NULL || *head == NULL)
return (-1);

elm = *head;

if (index == 0)
{
elm = (*head)->next;
free(*head);
*head = elm;
return (1);
}

for (i = 0; i < index && elm; i++)
{
prev = elm;
elm = elm->next;
}
if (elm)
{
prev->next = elm->next;
free(elm);
return (1);
}

return (-1);
}
