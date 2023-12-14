#include "shellc.h"
/**
 * usr_inpt - receives input from user
 * Return: char
 */
char *usr_inpt(void)
{
	char *comm = NULL;
	size_t buff = 0;
	ssize_t readbyts;
	size_t input_len, not_spc, j;

	while ((readbyts = getline(&comm, &buff, stdin)) != -1)
	{
		input_len = readbyts;
		if (input_len > 0 && comm[input_len -1] == '\n')
		{
			comm[input_len - 1] = '\0';
		}
		not_spc = 0;
		for (j = 0; j < input_len - 1; ++j)
		{
			if (!is_whitespace(comm[j]))
			{
				not_spc++;
				break;
			}
		}
		if (not_spc > 0)
		{
			return (comm);
		}
		_sPrint("StarsShell$ ");
	}
	free(comm);

	_sPrint("\n");
	exit(EXIT_SUCCESS);	
}
