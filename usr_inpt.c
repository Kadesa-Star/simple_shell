#include "shellc.h"
/**
 * usr_inpt - receives input from user
 * Return: char
 */
char *usr_inpt(void)
{
	char *comm = NULL;
	size_t buff = 0;
	ssize_t readbyts, input_len;

	while ((readbyts = getline(&comm, &buff, stdin)) != -1)
	{
		input_len = readbyts;
		if (input_len > 0 && comm[input_len -1] == '\n')
		{
			comm[readbyts - 1] = '\0';
		}
		if (input_len > 1)
		{
			return (comm);
		}
		sPrompt();
	}
	if (readbyts == -1)
	{
		_sPrint("\n");
		exit(EXIT_SUCCESS);
	}
	return (NULL);
}
