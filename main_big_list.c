#include "header.h"
int main(void)
{
	size_t size = 1000000, index = 0;
	list_t *head, *result;
	int array[1000000];

	for (index = 0; index < size; index++)
		array[index] = index + 1;
	
	head = create_list(array, size);
	/* print_list(head); */
	result = bs_list(head, size, 999999);
	print_result(result);
	free_list(head);

	return (0);
}
