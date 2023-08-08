#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <fcntl.h>

#include <stdlib.h>
#include <stdio.h>

typedef struct elf64
{
	unsigned char e_ident[16];
	unsigned char e_type[2];
	unsigned char e_machine[2];
	unsigned char e_version[4];
	unsigned char e_entry[8];
	unsigned char e_phoff[8];
	unsigned char e_shoff[8];
	unsigned char e_flags[4];
	unsigned char e_ehsize[2];
	unsigned char e_phentsize[2];
	unsigned char e_phnum[2];
	unsigned char e_shentsize[2];
	unsigned char e_shnum[2];
	unsigned char e_shstrndx[2];
} elf64_t;

int _putchar(int);
int _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
