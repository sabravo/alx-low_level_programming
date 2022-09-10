#include <stdio.h>

/**
 * main - Ommit some alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}

	putchar ('\n');

	return (0);

}
