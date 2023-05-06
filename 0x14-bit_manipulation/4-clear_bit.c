#include "main.h"

/**
	Write a function that sets the value of a bit to 0 at a given index.
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int masker = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	masker <<= index;
	*num &= ~masker;

	return (1);
}
