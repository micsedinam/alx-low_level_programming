#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * 
 * Return: 0
 */

int main(void)
{
	int i, n = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			n += i;
		}

		i++;
	}

	printf("%d\n", n);
	return (0);
}

