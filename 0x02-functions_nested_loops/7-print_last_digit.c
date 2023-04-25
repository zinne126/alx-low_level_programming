#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number.
 *
 * @a: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int a)
{
	if  (a >= 0 && a <= 9)
		return (a);

	else
	{
		a = _abs(a % 10);
		return (a);

	}

}
