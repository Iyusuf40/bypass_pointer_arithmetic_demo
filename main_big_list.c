#include "header.h"
/**
 * main - program entry
 *
 * Description: we'd test the algorithm with a relatively big number of nodes
 * 1000000 nodes and try to find an item at the tail end
 * Return: 0
 */
int main(void)
{
	size_t size = 1000000, index = 0;
	list_t *head, *result;
	int array[1000000];

	/* set each index of array */
	for (index = 0; index < size; index++)
		array[index] = index + 1;
	
	head = create_list(array, size);
	/* print_list(head); */
	result = bs_list(head, size, 999999);
	print_result(result);
	free_list(head);

	return (0);
}
