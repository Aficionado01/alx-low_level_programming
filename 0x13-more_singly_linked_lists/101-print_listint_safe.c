#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _rm - reallocates memory for an array of pointers
* to the nodes in a linked list
* @list: the old list
* @size: size of the new list
* @ne: new node
*
* Return: pointer to the new list
*/
const listint_t **_rm(const listint_t **list, size_t size, const listint_t *ne)
{
const listint_t **new_list;
size_t i;

new_list = malloc(size * sizeof(listint_t *));
if (new_list == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
new_list[i] = list[i];
new_list[i] = ne;
free(list);
return (new_list);
}

/**
* print_listint_safe - prints a listint_t linked list.
* @head: pointer to the start of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t i, count = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < count; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (count);
}
}
count++;
list = _rm(list, count, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (count);
}
