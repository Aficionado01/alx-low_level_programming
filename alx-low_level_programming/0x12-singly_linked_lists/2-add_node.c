#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: The node at the beginning of the list
 * @str: The string to be contained in the new node
 *
 * Return: The pointer to the new node otherwise, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0, size;
	char *str1;
	list_t *new_node;

	for (len = 0; str && str[len] != '\0'; len++)
		;
	if (head)
	{
		size = sizeof(list_t);
		new_node = malloc(size);
		if (new_node)
		{
			str1 = malloc(sizeof(char) * (len + 1));
			if (!str1)
			{
				free(new_node);
				return (NULL);
			}
			for (len = 0; str[len] != '\0'; len++)
				str1[len] = str[len];
			str1[len] = '\0';
			new_node->str = str1;
			new_node->len = len;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
