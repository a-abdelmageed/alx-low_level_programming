#include "main.h"

/**
	 Write a function that converts a binary number to an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNum = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			convertedNum = (convertedNum << 1) | 1;
		else if (*b == '0')
			convertedNum <<= 1;
		else
			return (0);
		b++;
	}

	return (convertedNum);
}
