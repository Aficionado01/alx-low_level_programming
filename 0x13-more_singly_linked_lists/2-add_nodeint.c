#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: douuble pointer to the beginning of a listint_t list
* @n: integer to add to the list
*
* Return: address of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_elm;
if (head == NULL)
return (NULL);
new_elm = malloc(sizeof(listint_t));
if (new_elm == NULL)
return (NULL);

new_elm->n = n;
new_elm->next = *head;

*head = new_elm;
return (new_elm);
}
