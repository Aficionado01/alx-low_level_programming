#include <stdio.h>
#include "lists.h"

/**
* print_listint -  prints all the elements of a list.
* @h: list to print
*
* Return: number of elements in the list
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
