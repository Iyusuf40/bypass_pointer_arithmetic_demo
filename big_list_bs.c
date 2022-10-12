#include "header.h"

/**
 * print_sub_list_range - prints the indexes to search
 *
 * @low: first index of list or sublist to search
 * @high: last index of list or sublist to search
 */
void print_sub_list_range(size_t low, size_t high)
{
	printf("\nSearching index range: ");
	while (low <= high)
	{
		printf("%lu", low);
		low++;
		if (low <= high)
			printf(", ");
	}
	printf("\n");
}

/**
 * bs - searches the list using binary search algo
 * @list: head of linked list
 * @low: first index of list or sublist to search
 * @high: last index of list or sublist to search
 * @factor: size of struct + padding
 * @value: value to search for
 * Return: node if found else NULL
 */
list_t *bs(list_t *list, size_t low, size_t high, size_t factor,
	      int value)
{
	size_t mid = ((low + high) / 2), save;
	list_t *current;

	if (low > high)
		return (NULL);

	/* the next 3 lines is where pointer arithmetic is bypassed */
	save = (size_t) list; /* save holds address of head */
	save = save - (factor * mid); 
	/** 
	 * save is now exactly address of mid index,
	 * with pointer arithmetic save - mid won't take to effect the 
	 * extra 8 bytes padding
	 */
	
	/* now we assign current the address of mid index node*/
	current = (list_t *) save;
	/* print_sub_list_range(low, high); */
	printf("\tValue checked at index [%lu] = [%d]\n", mid, current->value);
	if (current->value == value)
		return (current);
	if (current->value > value)
		return (bs(list, low, (mid - 1), factor, value));
	else if (current->value < value)
		return (bs(list, (mid + 1), high, factor, value));

	return (NULL);
}
/**
 * bs_list - implementation of binary search with a linked list
 * @list: head of list
 * @size: no of nodes in the list
 * @value: value to search for
 * Return: pointer to found index or NULL
 */
list_t *bs_list(list_t *list, size_t size, int value)
{
	size_t low = 0, high = (size - 1), factor;

	if (!list || !size)
		return (NULL);
	factor = (size_t)((size_t)list - (size_t)(list->next));
	printf("\nfactor = %lu\n", factor);

	printf("\n========== Search start ==========\n");
	printf("========== Searching for %d ==========\n", value);
	return (bs(list, low, high, factor, value));
}
