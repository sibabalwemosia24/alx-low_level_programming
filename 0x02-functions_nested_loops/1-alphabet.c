#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
}
/**
 * main - print alphabet
 * Description: uses print_alphabet funtion followed by new line
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}
