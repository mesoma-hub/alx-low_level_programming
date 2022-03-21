#include "main.h"
/**
 * puts2 - prints one character out of two, starting with the first
 *
 * @str: the string to look at
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = _strlen(str) - 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
