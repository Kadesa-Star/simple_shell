#include "shellc.h"

/**
 * is_whitespace - checks if its a whitespace
 * @c: character to be checked
 * Return: int
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}
