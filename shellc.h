#ifndef SHELLC_H
#define SHELLC_H

/**
 * these are my header files
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define LEN 1024
/**
 * these are my prototypes
 */
char **_tok(const char *comm);
int main(void);
void sPrompt(void);
void _sPrint(const char *str);
void exect(const char *argms);
char *usr_inpt(void);
ssize_t new_line(const char *str);
char *_strcpy(char *dest, const char *src);
size_t _strlen(const char *str);

#endif
