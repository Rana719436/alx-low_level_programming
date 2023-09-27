#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 * @s: the reference to a string
 * @b: the character to set
 * @n: the number of bytes to be replaced by @b
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0;)
		*(s + --n) = b;

	return (s);
}
