#include "main.h"
/**
 * _puts - minics stdio version of puts
 * @str: the value to process to the stdout.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
