/**
 * File: 1-alphabet.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * printalphabet - prints the alphabet in lowercase, followed by a new line.
 *
 *Description:Alphabets in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
