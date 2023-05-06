#include "main.h"

/**
	Write a function that sets the value of a bit to 1 at a given index.
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int masker = 1;


	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	masker <<= index;
	*num = *num | masker;
	return (1);
}
