/*
 * File: 7-print_diagonal.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int lenn, space;

	if (n > 0)
	{
		for (lenn = 0; lenn < n; lenn++)
		{
			for (space = 0; space < lenn; space++)
				_putchar(' ');
			_putchar('\\');

			if (lenn == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
