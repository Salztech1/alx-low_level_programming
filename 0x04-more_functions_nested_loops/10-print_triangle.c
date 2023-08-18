#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hand, index;

	if (size > 0)
	{
		for (hand = 1; hand <= size; hand++)
		{
			for (index = 0; index < hand; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hand; index++)
			{
				_putchar('#');
			}
			if (hand == size)
			{
				continue;
			}
			_printf('\n');
		}
	}
	_putchar('\n');
}
