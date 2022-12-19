#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int kofo;

	for (kofo = 0; kofo < n ; kofo++)
	{
		if (kofo != n - 1)
		printf("%d, ", a[kofo]);
		else
		printf("%d", a[kofo]);
	}
	putchar(10);
}
