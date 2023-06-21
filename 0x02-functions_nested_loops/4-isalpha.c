#include "main.h"
/**
  * _isalpha - this function checks whether a character is an alphabet
  * @c: this is the function argument
  *
  * Return: 1 success. 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
