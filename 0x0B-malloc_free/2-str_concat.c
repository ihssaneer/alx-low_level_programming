#include "main.h"
int _strlenth(char *str);
/**
 * str_concat - concatenates two strings.
 * @s1: the 1st string.
 * @s2: the 2nd string.
 * Return: pointer should point to a newly allocated space or NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp = NULL;
	int i = 0, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	tmp = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/**
 * _strlenth - Calculate the lenth of a string.
 * @str: The string to mesure.
 * Return: Returns the lenth of the str.
 */
int _strlenth(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	/*printf("%u", i);*/
	return (i - 1);
}
