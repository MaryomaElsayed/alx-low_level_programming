#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @h: pointer to the number to changeeeeeeeeeeee
 * @index: index of the bit to set to 1
 *
 * reeeeeeeeeeeew
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *h, unsigned int index)
{
	if (index > 63)
		return (-1);

	*h = ((1UL << index) | *h);
	return (1);
}
