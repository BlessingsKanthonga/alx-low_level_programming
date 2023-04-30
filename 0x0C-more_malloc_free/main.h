#ifndef MAIN_H
#define MAIN_H

char *multiply(const char *s1, const char *s2);
int _atoi(const char *s);
void _puts(const char *s);
size_t _strlen(const char *s);
int _isdigit(int c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char);
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);

#endif /* MAIN_H */
