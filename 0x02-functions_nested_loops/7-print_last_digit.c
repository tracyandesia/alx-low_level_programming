#include "main.h"
/**
 * _abs - returns 1 if n is lowercase, 0 otherwise
 * @n: integer to be tested
 * Return: abs(n)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs((n % 10));
	_putchar(last_digit + 48);
	return (last_digit);
}
