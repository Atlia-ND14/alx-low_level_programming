#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be sqred
 * x: num
 * Return: 0 or 1
 */
int _sqrt_recursion(int n)
{
	if (x * x == n)

		return (x);
	if (x * x > n)
		return (-1);
	return (is_sqrt(x + 1, n));
}
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (is_sqrt(1, n));
}
