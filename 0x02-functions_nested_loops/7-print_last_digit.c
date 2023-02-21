#include "main.h"

/**
 * print_last_digit - is a function
 * @n: is a parameter to be checked
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_number = n % 10;

	if (last_number < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number + '0');
	return (last_number);
}
