#include "main.h"

/**
 * print_line - Prints a line n number of times
 * @n: number of times line is to be printed
 */
void print_line(int n)
{
	while (n != 0)
	{
		const char *t = "_";
		int i;

		for (i = 0; t[i] != 0; i++)
		{
			putchar(t[i]);
		}
		n--
	}
	if (n != 0)
	{
		const char *new = "\n";
		int j;

		for (j = 0; new[j] != 0; j++)
		{
			putchar(new[j]);
		}
	}
	if (n <= 0)
	{
		const char *news = "\n";
		int k;

		for (k = 0; news[k] != 0; k++)
		{
			putchar(news[k]);
		}
	}
}
