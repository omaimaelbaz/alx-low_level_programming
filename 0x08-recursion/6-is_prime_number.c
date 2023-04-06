#include "main.h"

/**
 * is_prime_number - Checks number if prime
 * find_prime - find if  number is prime
 *
 * @div: The divisor
 *
 * @n: number
 *
 * Return: 1 if number is prime,  0 if not
 */
int find_prime(int n, int div)
{
	if (n % div == 0 && div != n)
		return (0);
	if (div == n)
		return (1);

	return (find_prime(n, div + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (find_prime(n, 2));
}
