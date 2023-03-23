#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints every value to 98
 *
 * @n: an  Argument of the function
 *
 * Return: void
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	else
	{
		printf("%d", n);
	}

	printf("\n");
}
