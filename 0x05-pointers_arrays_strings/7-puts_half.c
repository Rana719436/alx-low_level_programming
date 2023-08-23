#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input 
 */
void puts_half(char *str)
{	
      
      int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i += 1;
	}
	_putchar('\n');
}
