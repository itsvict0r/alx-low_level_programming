#include "main.h"

/**
  * print_triangle - function prints a triangle using #
  * @size: func. arg. The size of the triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = size; j > i + 1; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
