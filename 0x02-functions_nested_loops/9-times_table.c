#include "main.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int a, b, prob;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar(48);
				continue;
			}
			prob = a * b;
			_putchar(',');
			_putchar(' ');
			if (prob >= 10)
			{
				_putchar(prob / 10 + 48);
				_putchar(prob % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(prob + 48);
			}
		}
		_putchar('\n');
	}
}

