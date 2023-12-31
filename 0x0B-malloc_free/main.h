#ifndef MALLOC_FREE_H
#define MALLOC_FREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /*ARGV_ARGC_H*/
