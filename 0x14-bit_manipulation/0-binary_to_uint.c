#include "main.h"

/*ihssaneer*/
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : argument
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_n = 0;

	if (b == NULL)
		return (0);
	if (strlen(b) == 8)
	{
	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec_n += 2
		}
		else
			return (0);
	}
	}
}
