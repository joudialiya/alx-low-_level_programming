#include "main.h"

/**
 * prime_helper - if prime
 * @index: index
 * @n : num
 *
 * Return: if prime
 */
int prime_helper(int index, int n)
{

	if (index == n)
		return (1);
	if (n % index == 0)
		return (0);
	return (prime_helper(index + 1, n));
}

/**
 * is_prime_number - is prime
 * @n: num
 *
 * Return: if prime
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	if (n == 1 || n == 0)
		return (0);

	return (prime_helper(2, n));
}
