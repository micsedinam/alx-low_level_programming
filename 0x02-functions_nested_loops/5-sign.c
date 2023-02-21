#include "main.h"

/**
 * main - is the main function of the program
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0) {
		_putchar('+');
		return (1);
	}
	if (n == 0) {
		_putchar('0');
		return (0);
	}
	if (n < 0) {
		_putchar('-');
		return (0);
	}
	return (0);
}

