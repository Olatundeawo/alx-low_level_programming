#include "main.h"
/**
 * swap_int - a function that hold two pointers.
 *
 * @a: first pointer .
 * @b: second integer pointer.
 */

	void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;


}
