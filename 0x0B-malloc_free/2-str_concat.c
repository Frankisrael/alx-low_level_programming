#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
	{
		s1_len = 1;
	}
	else if (s2 == NULL)
	{
		s2_len = 1;
	}
	else
	{
		while (s1[s1_len])
		{
			s1_len++;
		}

		while (s2[s2_len])
		{
			s2_len++;
		}
	}

	str = (char *) malloc((sizeof(char) * s1_len) + (sizeof(char) * s2_len) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	for (; j < s2_len; j++, i++)
	{
		str[i] = s2[j];
	}
	return (str);
}
