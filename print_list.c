#include "header.h"
void print_list(list_t *list)
{
	if (list)
		printf("\ncurrent refers to each node:\n");
	while (list)
	{
		printf("\tcurrent index is %lu and value is %d\n",
				list->index, list->value);
		list = list->next;
	}
}
