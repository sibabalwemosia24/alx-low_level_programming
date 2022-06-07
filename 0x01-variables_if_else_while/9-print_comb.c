#include <stdio.h>
/**
 * main- prints a combination of single digit numbers
 *
 * Returns: returns to zero
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(',');
		}
	}
	
	putchar('\n');
	return (0);
}
	
