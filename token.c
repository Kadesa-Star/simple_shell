#include "shellc.h"
/**
 * _tok - main function
 * @comm: the command
 * Return: void
 */
char **_tok(const char *comm)
{
	size_t n = 0;
	char **toks, *tok, *commdup;
	size_t maxtok;

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
	commdup = malloc(_strlen(comm) + 1);
	if (commdup == NULL)
	{
		perror("allocation error");
		exit(EXIT_FAILURE);
	}
	_strcpy(commdup, comm);
	tok = strtok(commdup, " ");
	n = 0;
	while (tok != NULL && n < maxtok)
	{
		toks[n] = malloc(_strlen(tok) + 1);
		while (toks[n] == NULL)
		{
			perror("allocation error");
			exit(EXIT_FAILURE);
		}
		_strcpy(toks[n], tok);
		n++;
		tok = strtok(NULL, " ");
	}
	free(commdup);
	toks[n] = NULL;
	return (toks);
}
