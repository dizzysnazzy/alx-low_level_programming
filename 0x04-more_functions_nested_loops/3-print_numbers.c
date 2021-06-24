/*
 * File: 3-print_numbers.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		_putchar((digit % 10) + '0');

	_putchar('\n');
}
