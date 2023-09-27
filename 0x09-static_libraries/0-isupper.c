#include "main.h"

/**
*_isupper - checks if the charachter is uppercase or not
*@c: checks if the character in asc ii table
*Return: 1 if upper
*otherwise return 0
*/
int _isupper(int c)
{
	return ((c >= 65) && (c <= 90) ? 1 : 0);
}
