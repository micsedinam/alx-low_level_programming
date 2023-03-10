#include "main.h"

/**
 * _isalpha - function for lowercase checks
 * @c: char to be checked
 * Return: 1 for lowercase and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
