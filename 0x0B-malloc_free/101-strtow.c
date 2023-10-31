#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: the string to copy.
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
int wordIndex = 0, wordStart = 0, wordLength = 0, numWords = 0, i = 0, j = 0;
char **words = NULL;

if (str == NULL || str[0] == '\0')
	return (NULL);
words = (char **)malloc((numWords + 1) * sizeof(char *));
if (words == NULL)
	return (NULL);
for (; str[i] != '\0'; i++)
{
	if (str[i] == ' ')
	{
		if (wordStart < i)
		{
			wordLength = i - wordStart;
			words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char *));
			if (words[wordIndex] == NULL)
			{
				for (; j < wordIndex; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[wordIndex], str + wordStart, wordLength);
			words[wordIndex][wordLength] = '\0';
			wordIndex++;
		}
		wordStart = i + 1;
	}
}
return (words);
}
