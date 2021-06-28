/*
 * File: 4-print_rev.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, index, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
