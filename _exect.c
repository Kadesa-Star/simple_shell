#include "shellc.h"
/**
 * exect - function that executes the command
 * @argms: pointer to string
 */
void exect(const char *argms)
{
	pid_t cPid;
	char **args;

	args = _tok(argms);

	cPid = fork();
	if (cPid == -1)
	{
		perror("error forking");
		exit(EXIT_FAILURE);
	}

	if (cPid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("error");
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		wait(NULL);
	}
	free(args[0]);
	free(args);
}
