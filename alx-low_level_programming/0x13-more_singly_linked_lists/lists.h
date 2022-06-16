#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#define PRINT_LOOP_NODE(node) {\
	print_int_str(0, "[", 0); \
	print_ptr((void *)(node), 0); \
	print_int_str(0, "] ", 0); \
	print_int_str((node)->n, NULL, 0);\
	_putchar('\n'); }
#define PRINT_LOOP_NODE_2(node) {\
	print_int_str(0, "-> [", 0); \
	print_ptr((void *)(node), 0); \
	print_int_str(0, "] ", 0); \
	print_int_str((node)->n, NULL, 0);\
	_putchar('\n'); }
/**
 * struct listint_s - Represents a singly linked list
 * @n: integer
 * @next: points to the next node
 */
struct listint_s
{
	int n;
	struct listint_s *next;
};
typedef struct listint_s listint_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char exists(void **arr, size_t n, void *item);
void print_ptr(void *ptr, char stage);
void print_int_str(int num, char *str, char stage);
size_t print_listint_safe(const listint_t *head);
void *_realloc1(void *ptr, unsigned int old_size, unsigned int new_size);
char exists1(void **arr, size_t n, void *item);
void free_nodes(void **nodes_ptr, size_t n);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
#endif
