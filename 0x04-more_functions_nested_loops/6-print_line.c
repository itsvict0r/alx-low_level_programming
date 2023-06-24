#include "main.h"

/**
  * print_line - function prints a straight line of length n
  * @n: func. arg. The length of the line
  *
  * Return: void
  */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
