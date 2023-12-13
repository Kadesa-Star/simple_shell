#include "shellc.h"
/**
 * _strlen - calculate string len
 * @str: input string
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
	size_t leng = 0;

	while (str[leng] != '\0')
		leng++;
	return (leng);
}
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, const char *src)
{
	size_t n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
