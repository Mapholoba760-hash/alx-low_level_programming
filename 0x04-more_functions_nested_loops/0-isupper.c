#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 otherwise or 1 if it is uppercaser
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
