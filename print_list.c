#include "header.h"
/**
 * print_list - prints each node's index and its value field
 * @list: head of list
 */
void print_list(list_t *list)
{
	if (list)
		printf("\n=== printing list ===\ncurrent refers to each node:\n");
	while (list)
	{
		printf("\tcurrent index is %lu and value is %d\n",
				list->index, list->value);
		list = list->next;
	}
}
