#include "main.h"
/**
 * _strlen_recursion - count the length of a string
 *
 * @s: string
 *
 * return :int number 'the lenght of string '
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
