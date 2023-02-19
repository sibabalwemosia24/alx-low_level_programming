#include <stdio.h>

/**
 * main - Prints numbers with the base o16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
