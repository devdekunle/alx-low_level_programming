#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
extern int errno;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void copyFile(int numArgs, char *file_from, char *file_to);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
#endif

