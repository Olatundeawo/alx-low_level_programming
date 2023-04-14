#include "search_algos.h"

/**
 * linear_search - function that perform a linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be search for
 * Return: return value or -1 or 0
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
