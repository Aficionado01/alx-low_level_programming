#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: The node at the beginning of the list
 * @str: The string to be contained in the new node
 *
 * Return: The pointer to the new head of the list otherwise, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *str_c;
	list_t *new_node;

	for (len = 0; str && str[len] != '\0'; len++)
		;
	if (head)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node)
		{
			str_c = malloc(sizeof(char) * (len + 1));
			if (!str_c)
				free(new_node);
			for (len = 0; str[len] != '\0'; len++)
				str_c[len] = str[len];
			str_c[len] = '\0';
			new_node->str = str_c;
			new_node->len = len;
			new_node->next = head;
		}
	}
	return (new_node);
}
