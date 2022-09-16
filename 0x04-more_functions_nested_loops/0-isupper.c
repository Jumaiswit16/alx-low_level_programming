#include "main.h"

/**
 * _isupper: returns an integar value basedon input
 *
 * Return: 0 if input is lowercase
 * 	   1 if input is uppercase
 */

int _isupper(int c)
{
	if(c >='a' && c <= 'z')
	{
		return (0);
	}
	else if (c >='A' && c <= 'Z')
	{
		return (1);
	}
	return (-1);
}
