/*
 * File: 0-strcat.c
 * Auth: Bello Augustine
 */

#include "main.h"
#include <string. h>

/**
 * strcat - Concatenates the string pointed to by @src,
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
