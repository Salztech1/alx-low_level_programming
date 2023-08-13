#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, and then uppercase
 * Return: 0 (success)
*/


int main(void)
{
	char b;

	char d;

	b = 'a';
	d = 'A';
	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
