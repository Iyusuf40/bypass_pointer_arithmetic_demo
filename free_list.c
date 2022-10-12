#include "header.h"
/**
 * free - frees all allocated memory
 * @list: head of linke list
 */
void free_list(list_t *list)
{
	list_t *save;

	if (!list)
		return;

	while (list)
	{
		save = list->next;
		free(list);
		list = save;
	}
}
