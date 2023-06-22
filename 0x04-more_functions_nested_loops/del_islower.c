#include "main.h"
/**
  * _islower - this function checks whether a character is lower case
  * @c: takes the arg
  *
  * Return: 1 if lower case. 0 otherwise.
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
