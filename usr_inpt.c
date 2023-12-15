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
		perror("Error reading input");
		return (-1);
	}
	else
	{
		rm_newln(comm, readbyts);
		_strcpy(command, comm);
	}
	free(comm);
	return (readbyts);
}
