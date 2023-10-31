#include "main.h"
/**
 * argstostr - concatenates all the arguments of your
 * program followed by a \\n.
 * @ac: the number of arguments.
 * @av: the array of values.
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, size = 0, z = 0;
	size_t j = 0;
	char *newstr = NULL;

	if (av == NULL || !ac)
		return (NULL);
	while (i < ac)
	{
		size += strlen(av[i]);
	}
	newstr = (char *) malloc(sizeof(char *) * (size + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			newstr[z] = av[i][j];
			z++;
			j++;
		}
		newstr[z] = '\n';
	}
	newstr[i] = '\0';
	return (newstr);
}
