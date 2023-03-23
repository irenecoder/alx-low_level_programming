#include "main.h"
#include <string.h>

/**
* main - Entry point
* Description: 'functions and nested loops'
* Return: Always 0 (Success)
*/
int main(void)
{
	char printed_string[] = "_putchar";
	int counter = 0;

	while (counter <= 8)
	{
		_putchar(printed_string[counter]);
		counter++;
	}
	return (0);
}
