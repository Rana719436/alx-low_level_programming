#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: first string
* @src: second string
* @n: n bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
