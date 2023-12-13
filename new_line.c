#include "shellc.h"
/**
 * new_line - finds the index of the new line char
 * @str: string to be checked
 * Return: -1 if not found
 */
ssize_t new_line(const char *str)
{
	ssize_t ind = 0;

	while (str[ind] != '\0')
	{
		if (str[ind] == '\n')
		{
			return (ind);
		}
		ind++;
	}
	return (-1);
}
