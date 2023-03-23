#include "main.h"

/**
 * print_last_digit - function to check if
 *       and return the last value of a number
 *
 * @n Data type as : Argument of the function
 *
 * Return:The last digit
*/

int print_last_digit(int n)
{

	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = (n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
