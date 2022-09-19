/*
 * File: 4-print_rev.c
 * Auth: Bello Augustine
 */

#include "main.h"
#include <string.h>

/**
 * print_rev -> Printins a string in reverse.
 * @s: The string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;
	n = strlen(s);
	for (i = n-1; 1 >= 0; 1 --)
	{

		_putchar(s[i]);

	}
}
