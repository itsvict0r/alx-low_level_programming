#include "main.h"

/**
  * _isdigit - function that checks if a character is
  * a digit
  * @c: function argument
  *
  * Return: 1 if a digit, 0 otherwise.
  */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
