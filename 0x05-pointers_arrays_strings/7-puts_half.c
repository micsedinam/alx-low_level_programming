#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: param
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0;

	int i, n;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (i = n; i < len; i++)
	{
		putchar(*(str + i));
	}
	_putchar('\n');
}
