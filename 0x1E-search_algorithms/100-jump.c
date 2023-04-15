#include "search_algos.h"
#include <math.h>
/**
 * min - comapre two integar
 * @a: first integar
 * @b: second integar
 * Return: always 0
 */

int min(int a, int b)
{
	if (b < a)
		return (a);
	else
		return (b);
}
/**
* jump_search - perform a jump search algorithm
*@array: array to be searched
*@size: size of the array
*@value: value of the target element
* Return:  return value or -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	int prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(value);
		if (prev >= value)
			return (-1);
	}
	printf("Value checked at index [%d] = [%d]\n", prev, step);

	while (array[prev] < value)
	{
		prev++;

		if (prev == min(step, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);

	return (-1);
}
