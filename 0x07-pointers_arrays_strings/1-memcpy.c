#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinantion memory area
 * @src: soure=ce memory area
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + 1);

	return (dest);
}
