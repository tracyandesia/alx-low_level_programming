#include "variadic_functions.h"


/**
 * sum_them_all - Retruns the sum of all its parameters
 * @n: The number of parameters passed to he function
 * @...: A variable number of parameters to calculate he sum of
 *
 * Retrun: If n === 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start (arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
