#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
void cpy(int src, int dest, char *src_name, char *dest_name);
void close_fd(int fd);
void print_elf_header(const Elf64_Ehdr *header);
int _memcmp(unsigned char *s1, char *s2, unsigned int n);

#endif
