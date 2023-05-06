#include "main.h"

/**
	Write a function that returns the value of a bit at a given index.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bitVal;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bitVal = (num >> index) & 1;

	return (bitVal);
}
