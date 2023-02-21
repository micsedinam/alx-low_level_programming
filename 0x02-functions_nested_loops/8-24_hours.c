#include "main.h"

/**
 * jack_bauer - is the function we are working with.
 *
 * Return; 0
 */

void jack_bauer(void)
{
	int hrs_tens, hrs_ones, mins_tens, mins_ones, hrs_max;

	hrs_max = 58;
	hrs_tens = '0';
	while (hrs_tens < '3')
	{
		if (hrs_tens == '2')
		{
			hrs_max = '4';
		}
		hrs_ones = '0';
		while (hrs_ones < hrs_max)
		{
			mins_tens = '0';
			while (mins_tens < '6')
			{
				mins_ones = '0';
				while (mins_ones < 58)
				{
					_putchar(hrs_tens);
					_putchar(hrs_ones);
					_putchar(':');
					_putchar(mins_tens);
					_putchar(mins_ones);
					_putchar('\n');
					mins_ones++;
				}
				mins_ones = '0';
				mins_tens++;
			}
			mins_tens = '0';
			hrs_ones++;
		}
		hrs_ones = '0';
		hrs_tens++;
	}
}
