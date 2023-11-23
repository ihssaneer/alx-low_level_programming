#include "main.h"

/*ihssaneer*/
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : argument
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0, i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			nm = nm << 1;
			if (b[i] & 1)
				nm += 1;
		}
		else
			return (0);
		i++;
	}
	return (nm);
}
