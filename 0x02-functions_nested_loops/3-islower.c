#include "main.h"

/**
  * _islower - function checks whether a character is lowercase
  *
  * parameter - function takes in an int argument
  * int c - function argument
  *
  * Return: 1 if lowercase, 0 if not.
  */
int _islower(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	return (c);
}
