#include "main.h"

/**
 * more_numbers - prints from 0-14 10 times
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		const char *text = "01234567891011121314\n";
		int i;

		for (i = 0; text[i] != 0 ; i++)
		{
			putchar(text[i]);
		}
	count++;
	}
}

