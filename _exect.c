#include "shellc.h"
/**
 * exect - function that executes the command
 * @argms: pointer to string
 */
void exect(const char *argms)
{
	pid_t cPid;
	char **args;
	int stat;


	args = malloc(2 * sizeof(char *));
	if (args == NULL)
	{
		perror("Allocation error");
		exit(EXIT_FAILURE);
	}
	args[0] = _strcpy(argms);
	if (args[0] == NULL)
	{
		perror("Allocation Error");
		free(args);
		exit(EXIT_FAILURE);
	}
	args[1] = NULL;	
	cPid = fork();
	if (cPid == -1)
	{
		perror("Forking errror");
		free(args[0]);
		free(args);
		exit(EXIT_FAILURE);
	}

	if (cPid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error");
			free(args[0]);
			free(args);
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		waitpid(cPid, &stat, 0);
	}
	free(args[0]);
	free(args);
}
