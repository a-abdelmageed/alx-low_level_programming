#include "main.h"

/**
	* Write a function that converts a binary number to an unsigned int.

	* Prototype: unsigned int binary_to_uint(const char *b);
	* where b is pointing to a string of 0 and 1 chars
	* Return: the converted number, or 0 if
	* there is one or more chars in the string b that is not 0 or 1
	* b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int convertedNum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '1' || b[i] == '0')
  	{
//    		convertedNum <<= 1;
//    		convertedNum += b[i]-'0';
		convertedNum = (convertedNum << 1) + b[i]-'0';
    		i++;
  	}
  	return convertedNum;
}
