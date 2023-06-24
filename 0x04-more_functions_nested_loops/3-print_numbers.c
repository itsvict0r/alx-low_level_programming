#include "main.h"

/**
  * print_numbers - function that prints the digits
  * followed by a new line
  *
  * Return: void
  */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
