#include "main.h"

/**
  * more_numbers - function that prints 0-14 ten times
  * followed by a new line
  *
  * Return: void
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int tens = j / 10;
			int units = j % 10;

			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
