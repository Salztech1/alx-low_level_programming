#include "main.h"

/**
 * print_array - A function that prints n elements in an arrey of integers
 * @a: array name
 * @n: number of elements
 * Return: input of a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
