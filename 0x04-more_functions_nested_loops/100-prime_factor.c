#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;
	long int largest = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			n /= i;
			largest = i;
		}
		else
		{
			i++;
		}
	}

	printf("%ld\n", largest);
	return (0);
}
