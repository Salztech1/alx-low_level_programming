#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: variable text
 * Return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
			else
			{
				return (0);
			}
}
