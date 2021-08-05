#include <stdlib.h>
#include"lists.h"
/**
* free_list - frees a list
* @head: pointer to first node of list
*/
void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
