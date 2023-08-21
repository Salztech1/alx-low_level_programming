#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
