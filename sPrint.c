#include "shellc.h"
/**
 * _sPrint - prints output on stdout
 * @str: pointer to string
 */
void _sPrint(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
