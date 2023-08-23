#include "main.h"
/**
 * reverse_array - A funtion that reverses array of integers
 * @a: array
 * @n: number of elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
