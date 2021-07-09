/*
 * File: 3-puts.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
