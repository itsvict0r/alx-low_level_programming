#include "main.h"

/**
  * jack_bauer - prints all the minutes from 00:00 to 24:59
  *
  * Return: void
  */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			int tens1 = i / 10;
			int units1 = i % 10;
			int tens2 = j / 10;
			int units2 = j % 10;

			_putchar(tens1 + '0');
			_putchar(units1 + '0');
			_putchar(':');
			_putchar(tens2 + '0');
			_putchar(units2 + '0');
			_putchar('\n');
		}
	}
}
