#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	const char *text = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY	Z\n";
	int i;

	for (i = 0; text[i] != 0; i++)
	{
		putchar(text[i]);
	}
	return (0);
}
