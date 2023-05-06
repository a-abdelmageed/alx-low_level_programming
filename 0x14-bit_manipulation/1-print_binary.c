#include "main.h"

/**
	Write a function that prints the binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	int val;
	static int counter;

	if (n == 0 && counter > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	val = (n & 1);
	counter++;
	print_binary(n >>= 1);
	_putchar('0' + val);
}
