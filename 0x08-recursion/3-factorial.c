#include "main.h"

/**
 * factorial - retun the factorial given number
 * @n: input number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
