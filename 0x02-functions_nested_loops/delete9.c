#include "main.h"
#include <unistd.h>

/**
  * times_table - prints the multiplication table
  *
  * Return: void
  */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int prod = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

			if (j != 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}

