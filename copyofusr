#include "shellc.h"
/**
 * usr_inpt - receives input from user
 * Return: char
 */
char *usr_inpt(void)
{
	char *comm = NULL;
	size_t buff = 0;

	if (getline(&comm, &buff, stdin) == -1)
	{
		if (feof(stdin))
		{
			_sPrint("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("get error");
			exit(EXIT_FAILURE);
		}
	}
	comm[strcspn(comm, "\n")] = '\0';
	return (comm);
}
