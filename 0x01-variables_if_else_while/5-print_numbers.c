/*
 * File: 5-print_numbers.c
 * Auth: Dismas Kipchumba
 */

#include <stdio.h>
/**
 * main - entry block
 * Description: no argument
 * Return: 0
 **/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	printf("\n");
	return (0);
}
