#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: string to be searched
 *@c: character to search
 *
 *Return: pointer to first occurence of c
 */
char * _strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
