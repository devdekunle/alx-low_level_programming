#define MAIN_H
#ifndef MAIN_H
void *malloc_checked(unsigned int b);
char *argstostr(int ac, char **av);
char *_strcat(char *dest, char *src);
char *_strcat(char *dest, char *src);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
int _putchar(char);
char *_strdup(char *str);a
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
#endif
