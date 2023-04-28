#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
