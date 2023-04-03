#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte
 * @s: bytes of the memory area
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
