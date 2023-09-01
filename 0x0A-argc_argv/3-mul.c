#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
}
return (0);
}
