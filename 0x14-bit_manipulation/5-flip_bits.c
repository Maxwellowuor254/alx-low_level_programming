#include "main.h"

/**
 * flip_bits -checking if a machine is little or big endian
 * @n: variable
 * @m: variable
 * Return: 0 for big, 1 for little
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}

	return (count);
}
