#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 success
 */
int main(void)
{
	int	i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
