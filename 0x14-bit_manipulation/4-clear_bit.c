#include "holberton.h"
/**
  * clear_bit - Function that sets the value of an specific bit to 0
  * @n: Pointer to the integer
  * @index: Position of the bit
  * Return: 1 if succeed or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(*n) * 8))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
