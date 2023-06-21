#include <unistd.h>
#include "main.h"

/**
  * main - entry point for program
  *
  * Return: 0 (success)
  */
int main(void)
{
	char str[] = "_putchar";
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
