#include "header.h"
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
