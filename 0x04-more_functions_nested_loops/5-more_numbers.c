#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; 1++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
