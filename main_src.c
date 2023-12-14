#include "shellc.h"
/**
 * main - this is the main source file for shell
 * Return: void
 */
int main(void)
{
	char command[240];

	while (true)
	{
		sPrompt();
		if (usr_inpt(command) == -1)
		{
			break;
		}
		if (_strlen(command) > 0)
		{
			exect(command);
		}
	}
	return (0);
}
