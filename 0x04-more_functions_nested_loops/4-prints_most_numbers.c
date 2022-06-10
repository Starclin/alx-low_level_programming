#include "main.h"

/**
 * print_most_numbers - prints from 0-9 without 2 and 4
 */
void print_numbers(void)
{
	const char *text = "01356789\n";
	int i;

	for (i = 0; text[i] != 0 ; i++)
	{
		putchar(text[i]);
	}
}

