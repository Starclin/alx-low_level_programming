#include "main.h"

/**
 * print_numbers - prints from 0-9
 */
void print_numbers(void)
{
	const char *text = "0123456789\n";
	int i;

	for (i = 0; text[i] != 0 ; i++)
	{
		putchar(text[i]);
	}
}

