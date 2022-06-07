#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return:0 (Success)
 */
int main(void)
{
	const char *text = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n";
	int i;

	for (i = 0; text[i] != 0; i++)
	{
		putchar(text[i]);
	}
	return (0);
}
