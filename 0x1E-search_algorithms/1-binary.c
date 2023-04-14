#include "search_algos.h"
/**
 * binary_search_recursive - function that perform a binary search
 * @arr: array to be searched
 * @r: upperbound
 * @l : lowerbound
 * @value : value to search for
 * Return: recursilvey the binary function or - 1
 */

int binary_search_recursive(int *arr, size_t l, size_t r, int value)
{
	 size_t mid;

	if (r < l)
		return (-1);
	printf("Searching in array: ");
	for (mid = l; mid < r; mid++)
		printf("%d, ", arr[mid]);
	printf("%d\n", arr[mid]);
	mid = l  + (r - l) / 2;
	if (arr[mid] == value)
		return (mid);
	if (arr[mid] > value)
		return (binary_search_recursive(arr, l, mid - 1, value));
	return (binary_search_recursive(arr, mid + 1, r, value));

}
/**
 * binary_search - fuction that perform a binary search
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return:  retuen -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));

}
