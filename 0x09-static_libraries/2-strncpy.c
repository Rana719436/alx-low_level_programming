#include "main.h"
/**
* _strncpy - copies a string.
* @dest: where to copy
* @src: where it will copy from
* @n: how many char to copy
* Return: dest the copyed one
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
