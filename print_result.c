#include "header.h"
void print_result(list_t *list)
{
	if (list)
		printf("Value %d found at node index %lu\n\n",
				list->value, list->index);
	else
		printf("Value not found\n\n");
}
