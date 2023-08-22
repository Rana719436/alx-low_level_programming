#include "main.h"
/**
 * print_rev - in reverse, followed by a new line
 * @s: print string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
	        s++;
		l++;

	}
	s--;
	for (i = l;i > 0; i--)
	{
		_putchar(*s);
		s--;
	}	
	_putchar('\n');
}
