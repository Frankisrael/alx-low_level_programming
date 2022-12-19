#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point to our function
 * @s: a pointer variable that takes string
 * Return: 0. For Success
 */

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	char storage;

		for (i = 0; s[i] != '\0'; i++)
		{
			counter++;
		}

		for (i = 0; i < counter / 2; i++)
		{
			storage = s[i];
			s[i] = s[counter - 1 - i];
			s[counter - 1 - i] = storage;
		}
}
