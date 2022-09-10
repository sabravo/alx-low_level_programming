#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	putchar ('\n');

	return (0);

}
