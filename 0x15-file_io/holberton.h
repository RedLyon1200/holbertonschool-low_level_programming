#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void W_err(char *file);
void R_err(char *file);
void C_err(char *file);
void _checker(char *from, char *to);

#endif
