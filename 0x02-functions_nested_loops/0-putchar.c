#include "main.h"

/**
  * main - entry point for program
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c[] = "_putchar";
	int i;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
