#include "holberton.h"
/**
 *print_line - prints a line n chars long.
 *@n: length of line.
 *
 *Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}