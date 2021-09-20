/*
 * File: _strcpy.c
 * Auth: Dismas Kipchumba
 */

#include "main.h"
#include "holberton.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, index;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
