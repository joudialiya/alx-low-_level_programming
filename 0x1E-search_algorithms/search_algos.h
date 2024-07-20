#ifndef __SEARCH_ALGOS__

#define __SEARCH_ALGOS__

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int *array, size_t start, size_t end);
int _helper(int *array, size_t start, size_t end, int value);

#endif
