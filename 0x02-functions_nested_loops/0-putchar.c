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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
