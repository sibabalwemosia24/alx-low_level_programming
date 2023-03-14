#include "main.h"

/**
 * _strchr - locates a chraracter in a string
 * @s: string to be checked
 * @c: first occurance of character
 * Return: the pointer to s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
