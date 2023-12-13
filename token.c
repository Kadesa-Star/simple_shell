#include "shellc.h"
/**
 * _tok - main function
 * @comm: the command
 * Return: void
 */
char **_tok(const char *comm)
{
	size_t n = 0;
	char **toks;
	char *tok;
	size_t maxtok;
	char *commdup;

	maxtok	= LEN;

	toks = malloc((maxtok + 1) * sizeof(char *));

	while (toks == NULL)
	{
		perror("Token Error");
		exit(EXIT_FAILURE);
	}

	for (n = 0; n < maxtok; n++)
	{
		toks[n] = NULL;
	}

	commdup = strdup(comm);
	if (commdup == NULL)
	{
		perror("duplication error");
		exit(EXIT_FAILURE);
	}

	tok = strtok(commdup, " ");
	n = 0;

	while (tok && n < maxtok)
	{
		toks[n++] = strdup(tok);

		if (toks[n - 1] == NULL)
		{
			perror("dup error");
			exit(EXIT_FAILURE);
		}

		tok = strtok(NULL, " ");
	}

	free(commdup);
	toks[n] = NULL;

	return (toks);
}
