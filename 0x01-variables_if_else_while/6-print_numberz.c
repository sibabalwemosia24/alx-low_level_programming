#include <stdio.h>
/**
 * main- prints the numbers 0 till 9
 *
 * Return: returns to 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
