#include "shellc.h"
/**
 * rm_newln - function that removes new line character
 * @stri: string
 * @ln: length
 */
void rm_newln(char *stri, ssize_t ln)
{
	if (ln > 0 && stri[ln - 1] == '\n')
	{
		stri[ln - 1] = '\0';
	}
}
