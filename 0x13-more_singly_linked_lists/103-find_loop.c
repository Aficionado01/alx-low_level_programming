#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the start of the list
*
* Return: address of the node or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *prev, *lstart;

prev = head;
lstart = head;
while (prev && lstart && lstart->next)
{
prev = prev->next;
lstart = lstart->next->next;
if (prev == lstart)
{
prev = head;
break;
}
}
if (!prev || !lstart || !lstart->next)
return (NULL);
while (prev != lstart)
{
prev = prev->next;
lstart = lstart->next;
}
return (lstart);
}
