#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: 0 if equal, less than 1 or greater than 1
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = (s2[i]);
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
