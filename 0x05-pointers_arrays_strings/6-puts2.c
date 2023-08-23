#include "main.h"
/**
 * puts2 - prints every other character of a string 
 * @str : input starting 
 */
void puts2(char *str)
{
        int i = 0;
        int l = 10;
     while (i < l)
	{
		 _putchar(str[i]);
		 i += 2;
	}
	_putchar('\n');
}
