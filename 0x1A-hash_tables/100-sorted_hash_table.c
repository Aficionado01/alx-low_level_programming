#include "hash_tables.h"

/**
 * str_copy1 - Creates a copy of a given string.
 * @s: The string to copy.
 *
 * Return: A pointer to the created string, otherwise NULL.
 */
char *str_copy1(const char *s)
{
	int i, len;
	char *s_c = NULL;

	if (s != NULL)
	{
		len = strlen(s);
		s_c = malloc(sizeof(char) * (len + 1));
		if (s_c != NULL)
		{
			for (i = 0; i < len; i++)
				s_c[i] = s[i];
			s_c[i] = '\0';
		}
	}
	return (s_c);
}

/**
 * shash_table_create - Creates a new sorted hash table.
 * @size: The maximum number of top-level items in the hash table.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tbl = NULL;
	unsigned long int i;

	tbl = malloc(sizeof(shash_table_t));
	if (tbl != NULL)
	{
		tbl->array = malloc(sizeof(shash_node_t *) * size);
		if (tbl->array != NULL)
		{
			for (i = 0; i < size; i++)
				tbl->array[i] = NULL;
			tbl->size = size;
			tbl->shead = NULL;
			tbl->stail = NULL;
		}
	}
	return (tbl);
}

/**
 * update_key_value - Updates a key-value element in a sorted hash table.
 * @ht: The sorted hash table.
 * @idx: The hash of the element to update.
 * @key: The byte array representaion of the element's key.
 * @value: The new item to be stored by the element.
 *
 * Return: An update status. 1 for successful, 0 otherwise.
 */
int update_key_value(shash_table_t *ht,
	unsigned long idx, const char *key, const char *value)
{
	shash_node_t *node = NULL, *tmp = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		node = ht->array[idx];
		if ((node != NULL) && (strcmp(node->key, key) == 0))
		{
			free(node->value);
			node->value = str_copy1(value);
			return (1);
		}
		tmp = (node == NULL ? NULL : node->next);
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = str_copy1(value);
				return (1);
			}
			tmp = tmp->snext;
		}
	}
	return (0);
}

/**
 * insert_node - Inserts a given node into a sorted hash table.
 * @ht: The hash table.
 * @hn: The hash node to insert.
 */
void insert_node(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *next = NULL, *prev = NULL;

	if (ht != NULL)
	{
		next = ht->shead;
		while ((next != NULL))
		{
			if ((strcmp(next->key, hn->key) < 0))
				prev = next, next = next->snext;
			else
				break;
		}
		hn->snext = next;
		hn->sprev = prev;
		if (prev != NULL)
			prev->snext = hn;
		else
			ht->shead = hn;
		if (next != NULL)
			next->sprev = hn;
		else
			ht->stail = hn;
	}
}

/**
 * insert_hash_table - Inserts a key-value element into a sorted \
 * hash table's top-level node list.
 * @ht: The sorted hash table.
 * @idx: The hash of the element to update.
 * @key: The byte array representaion of the element's key.
 * @value: The new item to be stored by the element.
 *
 * Return: An insertion status. 1 for successful, -1 for an error, \
 * and 0 if the insertion was impossible.
 */
int insert_hash_table(shash_table_t *ht,
	unsigned long idx, const char *key, const char *value)
{
	shash_node_t *node = NULL, *new_node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		node = ht->array[idx];
		if ((node == NULL) || (strcmp(node->key, key) > 0))
		{
			new_node = malloc(sizeof(shash_node_t));
			if (new_node != NULL)
			{
				new_node->key = str_copy1(key);
				new_node->value = str_copy1(value);
				new_node->next = node;
				insert_node(ht, new_node);
				if (node != NULL)
				{
					node->sprev = NULL;
					node->snext = node->next;
					if (node->next != NULL)
					{
						node->next->sprev = node;
					}
					node->next = NULL;
				}
				ht->array[idx] = new_node;
				return (1);
			}
			return (-1);
		}
	}
	return (0);
}

/**
 * insert_hash_node - Inserts a key-value element into a top-level \
 * sorted hash node's sub-list.
 * @hn: The sorted hash node.
 * @key: The byte array representaion of the element's key.
 * @value: The new item to be stored by the element.
 *
 * Return: An insertion status. 1 for successful and 0 otherwise.
 */
char insert_hash_node(shash_node_t *hn, const char *key, const char *value)
{
	shash_node_t *next = NULL, *prev = NULL, *tmp = NULL, *new_node = NULL;

	if ((hn != NULL) && (hn->next != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		next = hn->next;
		new_node = malloc(sizeof(shash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = str_copy1(key);
		new_node->value = str_copy1(value);
		new_node->next = NULL;
		while (next != NULL)
		{
			if (strcmp(next->key, key) < 0)
				prev = next, next = next->snext;
			else
				break;
		}
		if (prev != NULL)
		{
			tmp = prev->snext;
			prev->snext = new_node;
			new_node->sprev = prev;
			new_node->snext = tmp;
			tmp->sprev = new_node;
		}
		else
		{
			new_node->sprev = hn;
			hn->next = new_node;
		}
		return (1);
	}
	return (0);
}

/**
 * shash_table_set - Adds an element to a given sorted hash table.
 * @ht: The sorted hash table that will contain the element.
 * @key: The key of the element to add.
 * @value: The value of the element to add.
 *
 * Return: 1 if the addition was successful, otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	char update, ht_ins;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		/* check if an update occurred */
		update = update_key_value(ht, idx, key, value);
		if (update == 1)
			return (1);
		/* check if it can be inserted into the main list */
		ht_ins = insert_hash_table(ht, idx, key, value);
		if (ht_ins < 0)
			return (0);
		if (ht_ins == 1)
			return (1);
		/* insert in a sub list */
		return (insert_hash_node(ht->array[idx], key, value));
	}
	return (0);
}

/**
 * shash_table_get - Retrieves the value of an element with a given \
 * key in a sorted hash table.
 * @ht: The sorted hash table to search.
 * @key: The element's key.
 *
 * Return: The value of the element associated with the given \
 * key, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		node = ht->array[idx];
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->snext;
		}
	}
	return (NULL);
}

/**
 * shash_node_list_print - Prints the elements of a chained sub linked \
 * list in a sorted hash table according to a specified order.
 * @hn_head: The head hash node of the sub linked list.
 * @first: The pointer to the first element flag.
 * @reverse: Specifies the order in which the items should be printed.
 */
void shash_node_list_print(const shash_node_t *hn_head,
	char *first, char reverse)
{
	shash_node_t *node = NULL;

	if (hn_head != NULL)
	{
		if (reverse)
		{
			node = hn_head->next;
			while ((node != NULL) && (node->snext != NULL))
				node = node->snext;
			while ((node != NULL) && (node->next == NULL))
			{
				printf("%s'%s': '%s'", *first ? "" : ", ", node->key, node->value);
				*first = 0;
				node = node->sprev;
			}
		}
		else
		{
			node = hn_head->next;
			while (node != NULL)
			{
				printf("%s'%s': '%s'", *first ? "" : ", ", node->key, node->value);
				*first = 0;
				node = node->snext;
			}
		}
	}
}

/**
 * shash_table_print - Prints the elements of a sorted hash table.
 * @ht: A pointer to the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	char first = TRUE;

	if ((ht != NULL) && (ht->array != NULL))
	{
		printf("{");
		fflush(stdout);
		node = ht->shead;
		while (node != NULL)
		{
			printf("%s'%s': '%s'", first ? "" : ", ", node->key, node->value);
			fflush(stdout);
			first = FALSE;
			shash_node_list_print(node, &first, FALSE);
			node = node->snext;
		}
		printf("}\n");
		fflush(stdout);
	}
}

/**
 * shash_table_print_rev - Prints the elements of a sorted \
 * hash table in reverse.
 * @ht: A pointer to the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	char first = TRUE;

	if ((ht != NULL) && (ht->array != NULL))
	{
		printf("{");
		fflush(stdout);
		node = ht->stail;
		while (node != NULL)
		{
			shash_node_list_print(node, &first, FALSE);
			printf("%s'%s': '%s'", first ? "" : ", ", node->key, node->value);
			fflush(stdout);
			first = FALSE;
			node = node->sprev;
		}
		printf("}\n");
		fflush(stdout);
	}
}

/**
 * shash_table_delete - Deletes a sorted hash table and its elements.
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp0 = NULL, *tmp1 = NULL;
	unsigned long i;

	if ((ht != NULL) && (ht->array != NULL))
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				tmp0 = node->next;
				while (tmp0 != NULL)
				{
					tmp1 = tmp0->snext;
					if (tmp0->key != NULL)
						free(tmp0->key);
					if (tmp0->value != NULL)
						free(tmp0->value);
					free(tmp0);
					tmp0 = tmp1;
				}
				if (node->key != NULL)
					free(node->key);
				if (node->value != NULL)
					free(node->value);
				free(node);
			}
		}
		if (ht->array != NULL)
			free(ht->array);
		free(ht);
		ht = NULL;
	}
}
