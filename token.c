#include "shellc.h"
/**
 * _tok - main function
 * @comm: the command
 * Return: void
 */
char **_tok(const char *comm)
{
	size_t n = 0;
	char **toks = NULL, *tok, *commdup;

	toks = malloc(sizeof(char *));
	while (toks == NULL)
	{
		perror("Token Error");
		exit(EXIT_FAILURE);
	}
	commdup = malloc(_strlen(comm) + 1);
	while (commdup == NULL)
	{
		perror("allocation error");
		free(toks);
		exit(EXIT_FAILURE);
	}
	_strcpy(commdup, comm);
	tok = strtok(commdup, " ");
	while (tok != NULL)
	{
		toks = realloc(toks, (n + 2) * sizeof(char *));
		while (toks == NULL)
		{
			perror("reallocation error");
			free(commdup);
			exit(EXIT_FAILURE);
		}
		toks[n] = malloc(_strlen(tok) + 1);
		if (toks[n] == NULL)
		{
			perror("allocation error");
			free(commdup);
			free(toks);
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
