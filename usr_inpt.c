#include "shellc.h"
/**
 * usr_inpt - receives input from user
 * Return: char
 */
char *usr_inpt(void)
{
	char *comm = NULL;
	size_t buff = 0;
	ssize_t readbyts;

	readbyts = getline(&comm, &buff, stdin);

	if (readbyts == -1)
	{
		_sPrint("\n");
		exit(EXIT_SUCCESS);
	}

	comm[readbyts - 1] = '\0';

	return (comm);
}
