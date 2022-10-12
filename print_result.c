#include "header.h"
/**
 * print_result - prints the value and index of the node found
 * @list: head of list
 */
void print_result(list_t *list)
{
	if (list)
		printf("Value %d found at node index %lu\n\n",
				list->value, list->index);
	else
		printf("Value not found\n\n");
}
