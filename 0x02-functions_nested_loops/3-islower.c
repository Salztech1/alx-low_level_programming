#include "main.h"

/**
 * _islower - function hat checks for loercase character
 * @c: character to be checked
 * Return: 1 for lowewrcase character or 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
