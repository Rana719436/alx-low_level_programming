#include "main.h"
/**
 *_strchr - locates a character @c in a string @s
 *@s: the reference to string
 *@c: the character to locate in th
 *Return: Null if not found otherwise th
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
