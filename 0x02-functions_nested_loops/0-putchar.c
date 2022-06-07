#include <stdio.h>
/**
 * main- print putcher followed by new line
 *
 * Return: returns to 0
 */
in main(void)
{
	char *sh = stdio;
	
	while(*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
