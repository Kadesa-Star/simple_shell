#include "shellc.h"
/**
 * exect - function that executes the command
 * @argms: pointer to string
 */
void exect(const char *comm)
{
	pid_t cPid;
	char *args[2];

	args[0] = (char *)comm;
	args[1] = NULL;

	cPid = fork();
	if (cPid == -1)
	{
		perror("Forking error");
		exit(EXIT_FAILURE);
	}
	else if (cPid == 0)
	{

		if (execve(comm, args, NULL) == -1)
		{
			perror("Executio error");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
