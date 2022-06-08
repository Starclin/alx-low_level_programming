#include <stdio.h>

/**
 * print_sign - Entry Point
 * @n : number for sign convention
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	char c = '+';
	char d = '0';
	char e = '-';

	if (n > 0)
	{
		putchar(c);
		return (1);
	}
	else if (n == 0)
	{
		putchar(d);
		return (0);
	}
	else if (n < 0)
	{
		putchar(e);
		return(-1);
	}
	return (0);
}
