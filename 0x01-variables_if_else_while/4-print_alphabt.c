#include <stdio.h>

/**
  * main - Prints alphabet in lowwercase except q and e
  *
  * Return: returns to 0
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
