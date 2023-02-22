#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function to print to 98
 *
 * @n: integer to be checked
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
