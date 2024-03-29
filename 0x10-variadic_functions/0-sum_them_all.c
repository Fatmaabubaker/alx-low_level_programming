#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of it's parameters
 * @n: number of arguments passed into the function
 *
 * Return: The resulting sum
 */
int sum_them_all(const unsigned int n, ...)

{
	unsigned int i;
	int sum = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
