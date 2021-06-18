/*
 * File: 8-print_base16.c
 * Auth: Dismas Kipchumba
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;
	char alphabet;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
