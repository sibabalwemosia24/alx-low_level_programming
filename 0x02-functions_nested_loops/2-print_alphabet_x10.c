#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char ch = 'a';

	while (round < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');

		round++;
	}
}
