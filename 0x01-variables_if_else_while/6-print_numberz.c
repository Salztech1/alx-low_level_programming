#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	while
		(n < 10) {
			putchar(n + '0');
			n++;
		}
	putchar('\n');
	return (0);
}
