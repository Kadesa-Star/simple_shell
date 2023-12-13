#include "shellc.h"
/**
 * exect - function that executes the command
 * @comm: pointer to string
 */
void exect(const char *argms)
{
	pid_t cPid;
	int stat;
	char **args = NULL;
	size_t l;

	args = _tok(argms);

	cPid = fork();
	if (cPid == -1)
	{
		perror("error forking");
		exit(EXIT_FAILURE);
	}

	if (cPid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("error");
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		while (!(WIFEXITED(stat) || !WIFSIGNALED(stat)))
		{
			waitpid(cPid, &stat, WUNTRACED);
		}
	}
	if (args != NULL)
	{
		for (l = 0; args[l] != NULL; l++)
		{
			free(args[l]);
		}
		free(args);
	}
}