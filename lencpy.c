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
/**
 * _strdup - to duplicate a string
 * @str: pointer to the strin
 * Return: duplicate
 */
char *_strdup(const char *str)
{
	size_t len = _strlen(str);
	char *dup_st;
	size_t j;

	dup_st = malloc(len + 1);
	if (dup_st == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (j = 0; j <= len; j++)
	{
		dup_st[j] = str[j];
	}
	return (dup_st);
}
