/*
 * File: 4-print_rev.c
 * Auth: Bello Augustine
 */

#include "main.h"

/**
 * print_rev -> Printins a string in reverse.
 * @s: The string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
