#include "main.h"

/**
 * print_numbers - Entry point
 * Description - creating numbers from 0 to 9
 * Return: Always 0 (successful)
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
