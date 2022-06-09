#include "main.h"

/**
 * _isupper - Check if is upper ASCII
 * Return: 0 or 1 
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
