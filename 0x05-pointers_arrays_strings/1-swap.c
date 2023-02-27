#include "main.h"

/**
 * swap_int - function to be checked
 * @a: parameter to be checked
 * @b: parameter to be checked
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
