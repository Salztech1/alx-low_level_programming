#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - A function that concatenates two two string
 * @b: number of bytes to allocate
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
return (ptr);
}
