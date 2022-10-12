#include "header.h"
list_t *extend_list(list_t *head, int array[], size_t size, size_t prev_size)
{
	list_t *new, *last = head;
	size_t ceiling = size + prev_size;
	int index = 0;

	while (last->next)
		last = last->next;

	while (prev_size < ceiling)
	{
		new = malloc(sizeof(list_t));
		if (!new)
		{
			printf("malloc failled\n");
			free_list(head);
		}
		if (!index)
		{
			printf("new address = %lu, head = %lu, diff = %lu\n",
			(size_t)new, (size_t)head, ((size_t)new - (size_t)head));
		}
		new->value = array[index];
		new->index = prev_size;
		new->next = NULL;
		last->next = new;
		last = new;
		prev_size++;
		index++;
	}

	return (head);
}
