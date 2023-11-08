/**
 * *_strcmp - compare two words
 * @s1: pointer to a char
 * @s2: pointer to a char
 * Return: 0 if s1 and s2 are equals, another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0')
			return (0);
		x++;
	}

	return (s1[x] - s2[x]);
}
