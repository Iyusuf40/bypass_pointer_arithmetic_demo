#include "header.h"
int main(void)
{
	size_t size, size2;
	list_t *head, *result;

	int array[] = { 
		1, 2 , 4, 5, 7, 20, 32, 104, 1024
	};
	int array2[] = {
		5003, 7050, 9999, 13423
	};

	size = (size_t)(sizeof array / sizeof array[0]);
	head = create_list(array, size);
	print_list(head);
	result = bs_list(head, size, 1024);
	print_result(result);
	size2 = (size_t)(sizeof array2 / sizeof array2[0]);
	head = extend_list(head, array2, size2, size);
	print_list(head);
	result = bs_list(head, (size + size2), 56);
	print_result(result);
	free_list(head);

	return (0);
}
