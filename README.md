# Binary search algorithm implementation on a singly linked list – with actual memory indexing in C
In my post bypassing pointer arithmetic, I showed how one can achieve handling memory addresses that pointer arithmetic wouldn’t allow you to take hold of. Here, I’d use the method employed in that post to implement binary search on a singly linked list in such a way that we index directly into the memory location of the nodes we want to access.
Generally, a linked list is traversed linearly. Some implementations e.g. skip list have an express lane that permits jumping over nodes. Indexing like in a static array is quite not straightforward with a linked list because that will perhaps require, using pointer arithmetic to jump to nodes. But nodes are not necessarily guaranteed to be contiguous in memory. In addition, because malloc returns memory that may not be exactly the size of each node, some padding may be added to the space returned, pointer arithmetic will always hit memory locations short of the next node. The last point is exactly what this implementation addresses. The implementation involves getting the actual difference in memory size between nodes and using this difference as a factor to index to whichever node in the list is desired. Now to achieve this, pointer arithmetic must be bypassed because pointer arithmetic adds or subtracts the actual size of the data the pointer points to while in the case of a linked list built with malloc, each node actually sits on a padded memory, consequently making pointer arithmetic not point to the next node.

## The algorithm implementer function is the bs function in either list_bs.c or big_list_bs.c

### TO test a short list
Use the 0-main.c's main function..
compile like this to use the list_bs.c file: prints list and is verbose
```gcc [cflp]*c 0-main.c -o prog
```

### TO test a list of 1,000,000 nodes
Use the 1-main.c function
compile like this to use the big_list_bs.c file: does not print list and less verbose
to prevent clutering stdout
```gcc [cfbp]*c 1-main.c -o prog
```

### To test for even higher numbers 
use malloc to allocate memory for your array, like in 2-main.c file instead of using static arrays. and compile like this to use the big_list_bs.c file: does not print list and less verbose to prevent clutering stdout
```gcc [cfbp]*c 1-main.c -o prog
```
