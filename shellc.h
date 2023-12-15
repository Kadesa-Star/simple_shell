#ifndef SHELLC_H
#define SHELLC_H

/* these are my header files */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* these are my prototypes */
int main(void);
int usr_inpt(char *command);
void  rm_newln(char *stri, ssize_t ln);
void sPrompt(void);
void _sPrint(const char *str);
void exect(const char *argms);
/* ssize_t new_line(const char *str);*/
char *_strcpy(char *dest, const char *src);
size_t _strlen(const char *str);
int is_whitespace(char c);
char *_strdup(const char *str);

#endif
