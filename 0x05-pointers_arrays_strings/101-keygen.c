/*
 * File: 101-keygen.c
 * Auth: Dismas Kipchumba
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int index, sum, n;

	sum = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		pass[index] = rand() % 78;
		sum += (pass[index] + '0');
		putchar(pass[index] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
