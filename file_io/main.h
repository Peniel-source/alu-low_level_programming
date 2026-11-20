#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, char *action, char *name);
void check_close(int fd);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);

#endif
