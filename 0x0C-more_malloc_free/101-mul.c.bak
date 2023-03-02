/*
 * File: 101-mul.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int res = 0;

    for (; _isdigit(*s); s++)
        res = res * 10 + (*s - '0');

    return (res);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char **argv)
{
    int num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!_isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (98);
            }
        }
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    printf("%d\n", num1 * num2);

    return (0);
}
