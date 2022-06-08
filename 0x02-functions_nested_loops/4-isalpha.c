#include <stdio.h>

/**
 * _isalpha - Entry Point
 * @c - character check for case
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c > 65 && c < 91) || (c > 97 && c < 122));
}
