#include "main.h"


/**
 * largest_number - largest number
 * @a: 1
 * @b: 2
 * @c: 3
 *
 * Return: largest
 */
int largest_number(int a, int b,t  int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);

}
