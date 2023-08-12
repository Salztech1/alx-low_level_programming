#include <stdio.h>
/**
 * main - A program that that prints the alphabet in lowercase, and then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char b;

	char c;

	b = 'a';
	c = 'A';
	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	while
		(c <= 'Z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
