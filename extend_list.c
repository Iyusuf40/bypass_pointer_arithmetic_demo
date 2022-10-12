#include "header.h"
/**
 * extend_list - extends a linked list from its end
 * @array: store of value field of each node
 * @size: size of the new list to append to the previous list
 * @prev_size: size of 1st list
 *
 * Return: head of list
 */
list_t *extend_list(list_t *head, int array[], size_t size, size_t prev_size)
{
	list_t *new, *last = head;
	size_t ceiling = size + prev_size;
	int index = 0;

	/* get to the last node */
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
