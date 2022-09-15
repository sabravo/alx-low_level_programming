#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;

	n =i;

	if (n > 0)

		printf("%d is positive \n", n);

	if (n == 0)

		printf("%d is zero\n", n);
	if (n < 0)
{
		printf("%d is negative\n", n);
}
return (0);
}
