#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: EXIT_SUCCESS.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;
int sum;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (argc > 1)
{
for (i = 0; i < argc; i++)
{
if (!(isdigit(argv[i])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
