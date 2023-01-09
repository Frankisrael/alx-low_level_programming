#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: the argument count
 * @av: the array of string aguments
 *
 * Return: a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, len = 0, l = 0, j;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	arr = (char *) malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[l] = av[i][j];
			l++;
		}
		 arr[l] = '\n';
		 l++;
	}
	return (arr);
}
