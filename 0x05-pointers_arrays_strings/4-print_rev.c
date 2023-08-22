#include "main.h"
#include <string.h>
/**
 * function that prints a string, in reverse, followed by a new line
 * @s: print string
 */
void print_rev(char *s)
{
	int l = strlen(s);
	int i;

	while (*s != '\0')
	{
		_putchar(*s++);
		l++;

	}
	s--;
	for (i=l;i>0;s--)
	{
		_putchar(*s);
		s--;
	}	
	_putchar('\n');
}
