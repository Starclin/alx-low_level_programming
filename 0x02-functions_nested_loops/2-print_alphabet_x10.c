#include <stdio.h>

/**
 * print_alphabet_x10 - Entry Point
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		const char *text = "abcdefghijklmnopqrstuvwxyz\n";
		int i;

		for (i = 0 ; text[i] != 0; i++)
		{
			putchar(text[i]);
		}
		a++;
	}
}
