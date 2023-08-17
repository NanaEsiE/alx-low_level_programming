#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all of its parameters.
 * @n: amount of the arguments.
 *
 * Return: 0 is n or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(valist);

	return (sum);
}
