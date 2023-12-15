#include "shellc.h"
/**
 * main - this is the main source file for shell
 * Return: void
 */
int main(void)
{
	char command[240];
	int int_mode;

	int_mode = isatty(STDIN_FILENO);
	while (true)
	{
		if (int_mode)
		{
			sPrompt();
		}
		if (usr_inpt(command) == -1)
		{
			break;
		}
		if (_strlen(command) > 0)
		{
			rm_newln(command, _strlen(command));
			exect(command);
		}
	}
	return (0);
}
