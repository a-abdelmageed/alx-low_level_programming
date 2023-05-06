#include "main.h"
/*
	Write a function that returns the number of bits you would need to flip to get from one number to another.
*/

unsigned int get_length(unsigned long int num);

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, counter, length_1, length_2, TotalLength;
	int bit_1, bit_2;

	length_1 = get_length(n);
	length_2 = get_length(m);
	TotalLength = (length_1 > length_2) ? length_1 : length_2;

	counter = 0;
	for (x = 0; x < TotalLength; x++)
	{
		bit_1 = n & 1;
		bit_2 = m & 1;
		if (bit_1 != bit_2)
			counter++;
		n >>= 1;
		m >>= 1;
	}
	return (counter);
}

unsigned int get_length(unsigned long int num)
{
	unsigned int counter;

	if (num == 0)
		return (1);
	for (counter = 0; num != 0; counter++)
		num >>= 1;
	return (counter);
}
