#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * @str: input
 * Return: output
 */

void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	a = len - 1;
	for (o = 0; o <= a; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
