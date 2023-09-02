#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9).
* @g: The number to be checked
* Return: 1 for a character that will be a digit or 0 otherwise
*/

int _isdigit(int g)
{
	if (g >= 48 && g <= 57)
	{
	return (1);
	}
	return (0);
}
