#include "shellc.h"
/**
 * sPrompt - displays prompt on the screen
 */
void sPrompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		_sPrint("StarsShell$ ");
		fflush(stdout);
	}
	else
	{

	}
}
