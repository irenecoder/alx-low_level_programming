#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * No Argument of the function
 *
 * Return: void
*/

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 23)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			sleep(60);
			_putchar('\n');
			minutes++;
		}

		hours++;
	}
}

