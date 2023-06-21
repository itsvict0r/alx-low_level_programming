#include "main.h"

/**
  * print_alphabet - this function prints the
  * letters of the alphabet using _putchar
  *
  * Return: void always
  */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
