#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: The node at the beginning of the list
 * @str: The string to be contained in the new node
 *
 * Return: The pointer to the new node otherwise, NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *str1;
	list_t *tail;
	list_t *new_node;

	for (len = 0; str && str[len] != '\0'; len++)
		;
	tail = head ? *head : NULL;
	while (tail && tail->next != NULL)
		tail = tail->next;
	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		str1 = malloc(sizeof(char) * (len + 1));
		if (!str1)
			free(new_node);
		for (len = 0; str[len] != '\0'; len++)
			str1[len] = str[len];
		str1[len] = '\0';
		new_node->str = str1;
		new_node->len = len;
		new_node->next = NULL;
		if (tail)
			tail->next = new_node;
		if (*head == NULL)
			*head = new_node;
	}
	return (new_node);
}
