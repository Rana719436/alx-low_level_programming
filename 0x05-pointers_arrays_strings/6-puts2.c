#include "main.h"
/**
 * puts2 - prints every other character of a string 
 * @str : input starting 
 */
void puts2(char *str)
{
        int i = 0;
	char *c = str;
	while (*c != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
