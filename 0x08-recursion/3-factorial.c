#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 *
 * @n: positive number
 *
 * return: int number ' factorial of n '
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
