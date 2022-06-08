#include "main.h"
/**
 * main - prints _printchar
 *
 * Return: returns to 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
