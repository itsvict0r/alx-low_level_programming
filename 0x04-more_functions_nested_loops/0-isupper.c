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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (c);
}
