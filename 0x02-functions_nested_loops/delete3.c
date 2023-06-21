#include "main.h"

/**
  * _islower - new function name
  * @parameterc: the argument of the function
  *
  * _islower: function checks that a character is lower case.
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
