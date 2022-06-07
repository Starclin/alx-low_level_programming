#include <stdio.h>

/**
 * print_alphabet - Entry Point
 *
 * Return:0 (Success)
 */
void print_alphabet(void)
{
	const char *text = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; text[i] != 0; i++)
	{
		putchar(text[i]);
	}
	return (0);
}
