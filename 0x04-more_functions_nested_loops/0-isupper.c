#include "main.h"

/**
  * _isupper - function that checks if a character is an upper
  * or lower case character
  * @c: function argument
  *
  * Return: 1 if uppercase, 0 if lowercase.
  */
int _isupper(int c)
{
	int a;

	if (c >= 65 && c <= 90)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
