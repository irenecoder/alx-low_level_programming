#include "main.h"

/**
 * print_sign - function to check if
 *       the value of n is equal to, greater or less than 0
 *
 * @n : Argument of the function
 *
 * Return: returns 1, 0, or -1 depending on the value of n
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

