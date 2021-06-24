/*
 * File: 6-print_line.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int lenn;

	if (n > 0)
	{
		for (lenn = 0; lenn < n; lenn++)
			_putchar('_');
	}

	_putchar('\n');
}
