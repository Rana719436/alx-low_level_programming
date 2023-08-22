#include "main.h"
/*
 * function that returns the length of a string
 * @s: string
 */
int _strlen(char *s);
{
	int l = 0

	while (*s != '\0')	
	{
            l++;
	    s++;
	}
	
        return (l);
}
