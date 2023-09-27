#include "main.h"
/**
*_isdigit - check if the input char is number or not
*@c: is the inputed number
*Return: 1 if a number
*otherwise 0
*/
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
