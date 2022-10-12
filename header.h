#ifndef HEADER
#define HEADER

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct s_list - structure of each node of a singly linked list
 * @value: simple store field
 * @index: index of each node in the list
 * @next: pointer to next node
 *
 * Description: singly linked list. Used to implement binary search algorithm
 */
struct s_list
{
	int value;
	size_t index;
	struct s_list *next;
};
typedef struct s_list list_t;
list_t *create_list(int array[], size_t size);
list_t *extend_list(list_t *head, int array[], size_t size, size_t prev_size);
list_t *bs_list(list_t *list, size_t size, int value);
void print_list(list_t *list);
void free_list(list_t *list);
void print_result(list_t *list);

#endif /* HEADER */
