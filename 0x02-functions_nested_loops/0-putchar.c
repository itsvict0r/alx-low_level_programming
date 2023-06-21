#include <unistd.h>
#include "main.h"

/**
  * main - entry point for program
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
