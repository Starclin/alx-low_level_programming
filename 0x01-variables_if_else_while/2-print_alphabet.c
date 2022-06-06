#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	const char *text = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; text[i] != 0; i++)
	{
		putchar(text[i]);
		putchar('\n');
	}
	return (0);
}
