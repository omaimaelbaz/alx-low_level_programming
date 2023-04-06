#include "main.h"
/**
 * _pow_recursion - a function that returns the pow of x raised the power of y
 *
 *@x: number
 *
 *@y: power
 *
 * return: the power x of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
