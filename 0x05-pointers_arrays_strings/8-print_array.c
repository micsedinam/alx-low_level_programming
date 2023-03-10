#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int len = 0;

	int i;

	while (*(a + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
			fflush(stdout);
		}
		else
		{
			printf("%d", *(a + i));
			fflush(stdout);
		}
	}
	_putchar('\n');
}
