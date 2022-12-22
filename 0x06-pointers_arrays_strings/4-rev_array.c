#include "main.h"

/**
 * reverse_array - Reverses the content of an array of intergers.
 * @a: The array of intergers to be reserved.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; inex > = n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index];
		a[index] = tmp;
	}
}
