#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int x, z;

	z = 0;

	if (size < 1)
		_putchar('\n');

	while (z < size)
	{
		x = 0;
	while (x < size)
	{
		_putchar('#');
		x++;
	}
	_putchar('\n');
	z++;
	}
}

