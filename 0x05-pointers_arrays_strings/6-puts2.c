#include "main.h"
/**
 * puts2 - prints every other character of a string 
 * @str : input starting 
 */
void puts2(char *str)
{
        int i;

	while (str[i] != '\0')
              if (i % 2 == 0)
	{
                 i++;
 		 i += 2;
		 _putchar(str[i]);
	}
	_putchar('\n');
}
