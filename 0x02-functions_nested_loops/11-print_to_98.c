#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - function that prints all natural numbers between n and 98
  * @n: integer argument
  *
  * Return: void
  */
void print_to_98(int n)
{
	int i = n;

	if (i != 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", i);
	}
}
