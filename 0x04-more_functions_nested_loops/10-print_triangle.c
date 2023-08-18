#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = 0; index < hash; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_printf('\n');
		}
	}
	_putchar('\n');
}
