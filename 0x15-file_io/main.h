#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stst/h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(cont char *filename, char *text_content);
int append_text_to_file(cont char *filename, char *text_content);

#endif /*MAIN_H*/