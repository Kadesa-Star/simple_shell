#include "shellc.h"
/**
 * usr_inpt - receives input from user
 * @command: the command
 * Return: char
 */
int usr_inpt(char *command)
{
	char *comm = NULL;
	int readbyts;
	size_t j = 0;

	readbyts = getline(&comm, &j, stdin);
	if (readbyts == -1 && j == 0)
	{
		_sPrint("\n");
		free(comm);
		exit(EXIT_SUCCESS);
	}
	else if (readbyts == -1)
	{
		perror("Error reading input");
		free(comm);
		exit(EXIT_FAILURE);
	}
	rm_newln(comm, readbyts);
	_strcpy(command, comm);
	free(comm);
	return (readbyts);
}
