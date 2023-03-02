/*
 * File: 1-memcpy.c
 * Auth: Dismas Kipchumba
 */

#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char* _memcpy(char* dest, char* src, unsigned int n) {
    char* pDest = dest;
    char* pSrc = src;
    while (n--) {
        *pDest++ = *pSrc++;
    }
    return dest;
}
