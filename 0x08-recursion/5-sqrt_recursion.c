#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: return -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: number
 */
int _sqrt(int, n int i)
{
	int square = i * i;

	if (square > n)
		return (i);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
