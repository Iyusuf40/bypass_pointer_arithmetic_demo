#include "header.h"
/**
 * main - program entry
 * Return: 0
 */
int main(void)
{
	size_t size;
	list_t *head, *result;

	int array[] = { 
		1, 2 , 4, 5, 7, 20, 32, 104, 1024
	};

	/* get no of elements in array */
	size = (size_t)(sizeof array / sizeof array[0]);
	/* create list */
	head = create_list(array, size);
	print_list(head);
	result = bs_list(head, size, 1024);
	print_result(result);
	free_list(head);

	return (0);
}
