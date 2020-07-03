#include "holberton.h"
/**
  * get_bit - Function that returns the value of an specific bit
  * @n: Integer 1 given
  * @index: Position of the bit
  * Return: Value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (sizeof(n) * 8))
	{
		n = n >> index;
		return (n & 1);
	}
	else
		return (-1);
}
