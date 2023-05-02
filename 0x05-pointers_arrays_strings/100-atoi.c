#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer representation of string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '_')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + s[i] - '0';
		if (result && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}
	return (result * sign);
}
