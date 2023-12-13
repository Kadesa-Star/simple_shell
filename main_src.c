#include "shellc.h"
/**
 * main - this is the main source file for shell
 * Return: void
 */
int main(void)
{
	char *input;

	while (true)
	{
		sPrompt();
		input = usr_inpt();
		if (!input)
		{
			_sPrint("\n");
			exit(EXIT_SUCCESS);
		}
		exect(input);
		free(input);
	}
	return (0);
}
