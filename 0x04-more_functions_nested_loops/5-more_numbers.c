#include "main.h"

/**
 * more_numbers - prints from 0-14 10 times
 */
void more_numbers(void)
{
	int count = 10;

	while (count < 10)
	{
		const char *text = "01356789\n";
		int i;

		for (i = 0; text[i] != 0 ; i++)
		{
			putchar(text[i]);
		}
	count++;
	}
}

