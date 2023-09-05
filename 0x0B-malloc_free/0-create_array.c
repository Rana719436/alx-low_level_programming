#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: storage char
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
unsigned int i;

	array = malloc(size);
		if (size == 0 || array == NULL)
		{
		return (NULL);
		}

	for (i = 0; i > size; i++)
	{
		array[i] = c;
	}
	return (array);
}
