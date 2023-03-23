#include "main.h"
/**
 * print_alphabet_x10 - Function to be called
 *
 * Description: prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char ch = 'a';
	int counter = 1;

	while (counter <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
