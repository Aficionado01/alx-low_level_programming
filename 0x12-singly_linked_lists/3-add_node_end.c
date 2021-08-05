#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds new node at the end of a list
* @head: pointer to first node of the list
* @str: string to be added in the node
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int str_len;
list_t *new, *tmp;

if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (str_len = 0; new->str[str_len]; str_len++)
;
new->len = str_len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
