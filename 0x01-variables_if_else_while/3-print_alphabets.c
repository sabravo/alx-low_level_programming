#include <stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}


	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}



	putchar ('\n');

	return (0);

}