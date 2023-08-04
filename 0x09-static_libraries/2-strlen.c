#include "main.h"

/**
 * _strlen - return lenth of string as an int value
 * @s: the string to measure.
 * Return: Int value of the lenth.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
