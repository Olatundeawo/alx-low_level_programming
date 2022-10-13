#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 *@...: variable to calculate sum of
 * Return: the total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum = sum +  va_arg(nums, int);

	va_end(nums);

	return (sum);


}
