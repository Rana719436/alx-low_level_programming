#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: input value
 * @src: input value
 * Return: a pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
     int d = 0;
     int s = 0;
          
     while (*(dest + d) != '\0')
     {
          d++;
     }
     while (*(src + s) != '\0')
     { 
          *(dest + d) = *(src + s);
	  d++;
	  s++;
     }
     d  = '\0';
return (dest);
}
