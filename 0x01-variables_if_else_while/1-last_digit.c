#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, abs(n) % 10);

	if (abs(n) % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (abs(n) % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is  0\n",
				n, n % 10);
	}

	return (0);
}
