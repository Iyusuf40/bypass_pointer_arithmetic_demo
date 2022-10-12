#include "header.h"
list_t *create_list(int array[], size_t size)
{
	list_t *head = NULL, *new;

	if (!size)
		return (NULL);

	while (size)
	{
		size--;
		new = malloc(sizeof(list_t));
		if (!new)
		{
			printf("malloc failed\n");
			free_list(head);
			return (NULL);
		}
		new->value = array[size];
		new->index = size;
		new->next = head;
		head = new;
	}
	return (head);
}
