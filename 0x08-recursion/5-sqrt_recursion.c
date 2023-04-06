#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * _sqrt_w - fonction takes tow aregument 
 * @n: input number
 *
 *@num: integer number
 *
 * return: sqrt root
 */
int _sqrt_w(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num <= 0)
		return (-1)
	else
		return (_sqrt_w(n, num - 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_w(n, n / 2));
}
