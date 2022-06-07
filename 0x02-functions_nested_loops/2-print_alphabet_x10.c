#include <stdio.h>

/**
 * print_alphabetx10 - Entry Point
 *
 * Return: 0 (Success)
 */
void print_alphabetx10(void)
{
	int a = 0;

	while (a < 10)
	{
		const char *text = "abcdefghijklmnopqrstuvwxyz\n";
		int i;

		for (i = 0, text[i] != 0; i++)
		{
			putchar(text[i]);
		}
		a++;
	}
}
