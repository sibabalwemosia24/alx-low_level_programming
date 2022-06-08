#include "main.h"
/**
 * main- prints _putchar
 *
 * Return: returns to 0
 */
int main(void)
{
	char *sh = "main.h";
	
	whiles (&sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
