#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks if letters are uppercase.
 *@c: input.
 *
 *Return: 1 if c is uppercase
 *0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
