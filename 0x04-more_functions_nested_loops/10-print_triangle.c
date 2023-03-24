#include "main.h"
/**
 * print_triangle - print '#' size times as a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int	i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return ;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
