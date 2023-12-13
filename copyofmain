#include "shellc.h"
/**
 * main - this is the main source file for shell
 * Return: void
 */
int main(void)
{
	char *input;
	char **args;
	size_t l;

	setenv("PATH", "/bin:/usr/bin", 1);

	while (true)
	{
		sPrompt();
		input = usr_inpt();
		args = _tok(input);
		exect(args[0]);

		free(input);
		for (l = 0; args[l] != NULL; l++)
		{
			free(args[l]);
		}
		free(args);
	}
	return (0);
}
