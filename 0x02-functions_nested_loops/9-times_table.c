#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, c, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (c = 1; c <= 9; c++)
		{
			op = a * c;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
